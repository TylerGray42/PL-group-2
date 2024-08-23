# Мониторинг
## Описание

Этот проект представляет собой систему мониторинга сервера с использованием Telegraf, InfluxDB и Grafana. Весь стек разворачивается с помощью Docker и docker-compose.

## Инструкция к запуску
### Настройка и запуск

1. Создайте файл окружения `.env` и укажите в нем параметры `INFLUXDB_PORT` и `GRAFANA_PORT`.
2. Запустите систему мониторинга с помощью Docker Compose:
```bash
docker-compose up -d
```
3. Доступ к Grafana
  - Настройка SSH-туннелирования:
  ```bash
  ssh -L <local-port>:localhost:<GRAFANA_PORT> <user>@<server-ip> -p <ssh-port>
  ```
  - Веб-браузер: `http://localhost:<local-port>`
