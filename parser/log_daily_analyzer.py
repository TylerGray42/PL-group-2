import re
import os
from collections import defaultdict
from datetime import datetime, timedelta
import matplotlib.pyplot as plt

# Очистить содержимое папки
folder_path = "days"

if not os.path.exists(folder_path):
    os.makedirs(folder_path)

for filename in os.listdir(folder_path):
    os.remove(os.path.join(folder_path, filename))


# Функция для парсинга времени
am_pm = None

def parse_time(time_str):
    global am_pm
    try:
        time_value = datetime.strptime(time_str, '%I:%M %p')
        am_pm = time_value.strftime('%p')
        return time_value  # для формата с AM/PM
    except ValueError:
        time_value = datetime.strptime(f"{time_str} {am_pm}", '%I:%M %p')
        return time_value # для формата без AM/PM


# Регулярные выражения для поиска действий
actions = {
    'team_created_grafana': re.compile(r'команда создана в графане'),
    'team_created': re.compile(r'команда создана(?! в графане)'),
    'subscription_created': re.compile(r'подписка для команды создана'),
    'test_started': re.compile(r'запустил test'),
    'test_status_finished': re.compile(r'status FINISHED'),
    'test_status_canceled': re.compile(r'status CANCELED'),
    'test_status_stopping': re.compile(r'status TEST_STOPPING'),
    'test_status_failed': re.compile(r'status FAILED'),
    'test_started_detailed': re.compile(r'стартовал grafana'),
    'subscription_updated': re.compile(r'обновил подписку на Free Plan'),
    'user_registered': re.compile(r'зарегистрировался'),
    'user_register_error': re.compile(r'ошибка регистрации')
}

# Регулярное выражение для поиска временной метки
time_pattern = re.compile(r'(\d{1,2}:\d{2} (?:AM|PM)|\d{1,2}:\d{2})')

# Инициализация структуры для подсчета операций по дням и часам
operation_count = defaultdict(lambda: defaultdict(int))

# Переменные для хранения текущего времени и даты
current_time = None # Текущее время
current_date = 1  # Начальная дата
action_hour = None # Текущий час

with open("log.txt", "r") as f:
    while line := f.readline():

        time_match = time_pattern.search(line)

        if time_match:

            # Парсим время из строки
            time_str = time_match.group(1)
            new_time = parse_time(time_str)

            # Проверяем смену дня
            # if current_time and current_time.strftime('%p') == 'PM' and new_time.strftime('%p') == 'AM':
            if current_time and new_time < current_time:
                current_date += 1

            current_time = new_time
            action_hour = current_time.hour  # округление до часа

        else:
            if current_time:  # Если есть запомненная временная метка
                for action_name, action_pattern in actions.items():
                    if action_pattern.search(line):
                        # Увеличиваем счетчик для конкретного дня, часа и действия
                        operation_count[current_date][action_name] += 1
                        break

        # Разделение логов по дням
        with open(f"days/{current_date}.txt", "a") as wf:
            wf.write(line)


dates = sorted(operation_count.keys())  # Сортировка дат
# dates = [10, 11, 13, 14, 27, 28, 34]

actions = list(actions.keys())  # Список всех типов действий

# Инициализация словаря для хранения данных по каждой операции
action_data = {action: [] for action in actions}

# Заполнение данных по каждой операции для каждой даты
for date in dates:
    for action in actions:
        action_data[action].append(operation_count[date].get(action, 0))

# Построение графика
plt.figure(figsize=(18, 10))

action_names = {
    'team_created_grafana': 'Создание команды в Grafana',
    'team_created': 'Создание команды',
    'subscription_created': 'Создание подписки для команды',
    'test_started': 'Запуск теста',
    'test_status_finished': 'Завершение теста',
    'test_status_canceled': 'Отмена теста',
    'test_status_stopping': 'Тест остановлен',
    'test_status_failed': 'Тест провален',
    'test_started_detailed': 'Cтартовала Grafana',
    'subscription_updated': 'Обновление подписки',
    'user_registered': 'Регистрация пользователя',
    'user_register_error': 'Ошибка регистрации'
}

# Отрисовка линии для каждой операции
for action, counts in action_data.items():
    plt.plot(range(len(dates)), counts, marker='o', label=action_names.get(action))

# Настройки графика
plt.title('Количество действий за каждый день')
plt.xlabel('Дата')
plt.ylabel('Количество действий')
plt.xticks(range(len(dates)), labels=list(map(str, dates)), rotation=45)
plt.legend(title="Типы действий")
plt.grid(True)

# Отображение графика
plt.show()
