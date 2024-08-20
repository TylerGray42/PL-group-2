import re
from collections import defaultdict
from datetime import datetime, timedelta
import matplotlib.pyplot as plt

# Регулярные выражения для парсинга времени и действий
time_pattern = re.compile(r'(\d{1,2}:\d{2} (?:AM|PM)|\d{1,2}:\d{2})')
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

# Инициализация данных
operation_count = defaultdict(lambda: defaultdict(int))

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

current_time = None
action_hour = None

with open("days/13.txt", "r") as f:
    while line := f.readline():
        time_match = time_pattern.search(line)

        if time_match:

            # Сохраняем время для следующих строк
            time_str = time_match.group(1)
            current_time = parse_time(time_str)
            action_hour = current_time.hour  # округление до часа

        else:
            if current_time:  # Если есть запомненная временная метка
                for action_name, action_pattern in actions.items():
                    if action_pattern.search(line):
                        operation_count[action_hour][action_name] += 1
                        break


hours = sorted(operation_count.keys()) # сортировка часов

team_created_grafana = [operation_count[hour]['team_created_grafana'] for hour in hours]
team_created = [operation_count[hour]['team_created'] for hour in hours]
subscription_created = [operation_count[hour]['subscription_created'] for hour in hours]
test_started = [operation_count[hour]['test_started'] for hour in hours]
test_status_finished = [operation_count[hour]['test_status_finished'] for hour in hours]
test_status_canceled = [operation_count[hour]['test_status_canceled'] for hour in hours]
test_status_stopping = [operation_count[hour]['test_status_stopping'] for hour in hours]
test_status_failed = [operation_count[hour]['test_status_failed'] for hour in hours]
test_started_detailed = [operation_count[hour]['test_started_detailed'] for hour in hours]
subscription_updated = [operation_count[hour]['subscription_updated'] for hour in hours]
user_registered = [operation_count[hour]['user_registered'] for hour in hours]
user_register_error = [operation_count[hour]['user_register_error'] for hour in hours]

# Преобразование данных для таблицы
action_names = {
    'team_created_grafana': 'Создание команды в Grafana',
    'team_created': 'Создание команды',
    'subscription_created': 'Создание подписки для команды',
    'test_started': 'Запуск теста',
    'test_status_finished': 'Завершение теста',
    'test_status_canceled': 'Отмена теста',
    'test_status_stopping': 'Тест остановлен',
    'test_status_failed': 'Тест провален',
    'test_started_detailed': 'Стартовала Grafana',
    'subscription_updated': 'Обновление подписки',
    'user_registered': 'Регистрация пользователя',
    'user_register_error': 'Ошибка регистрации'
}

# Вычисление суммы для каждого действия
sums = {
    'Создание команды в Grafana': sum(team_created_grafana),
    'Создание команды': sum(team_created),
    'Создание подписки для команды': sum(subscription_created),
    'Запуск теста': sum(test_started),
    'Завершение теста': sum(test_status_finished),
    'Отмена теста': sum(test_status_canceled),
    'Тест остановлен': sum(test_status_stopping),
    'Тест провален': sum(test_status_failed),
    'Cтартовала Grafana': sum(test_started_detailed),
    'Обновление подписки': sum(subscription_updated),
    'Регистрация пользователя': sum(user_registered),
    'Ошибка регистрации': sum(user_register_error)
}

# Общая сумма всех операций
total_sum = sum(sums.values())


data = []

for name in sums:
    current_sum = sums[name]
    current_percentage = (current_sum / total_sum) * 100 if total_sum > 0 else 0

    data.append((name, current_sum, current_percentage))

# Вычисление процентов и нарастающего итога
data_sorted = sorted(data, key=lambda x: x[2], reverse=True)

# Вывод таблицы
print(f"{'Операция'.ljust(32)} | {'Сумма'.ljust(10)} | {'Процент от общего'.ljust(20)} | {'Процент с нарастающим итогом'.ljust(30)}")
print('-' * 80)

cumulative_percentage = 0

for entry in data_sorted:
    action_name, current_sum, current_percentage = entry
    cumulative_percentage += current_percentage
    print(f"{action_name.ljust(32)} | {str(int(current_sum)).ljust(10)} | {f"{current_percentage: .2f}%".ljust(20)} | {cumulative_percentage: .2f}%")


# Построение графика
plt.figure(figsize=(15, 8))

plt.plot(hours, team_created_grafana, label='Создание команды в Grafana', marker='o')
plt.plot(hours, team_created, label='Создание команды (не в Grafana)', marker='o')
plt.plot(hours, subscription_created, label='Создание подписки для команды', marker='o')
plt.plot(hours, test_started, label='Запуск теста', marker='o')
plt.plot(hours, test_status_finished, label='Завершение теста', marker='o')
plt.plot(hours, test_status_canceled, label='Отмена теста', marker='o')
plt.plot(hours, test_status_stopping, label='Тест остановлен', marker='o')
plt.plot(hours, test_status_failed, label='Тест провален', marker='o')
plt.plot(hours, test_started_detailed, label='Cтартовала Grafana', marker='o')
plt.plot(hours, subscription_updated, label='Обновление подписки', marker='o')
plt.plot(hours, user_registered, label='Регистрация пользователя', marker='o')
plt.plot(hours, user_register_error, label='Ошибка регистрации', marker='o')

plt.xlabel('Часы')
plt.ylabel('Количество операция')
plt.title('Количество операция за каждый час')
plt.xticks(range(24))
plt.yticks(range(30))
plt.legend()
plt.grid(True)
plt.tight_layout()

plt.show()
