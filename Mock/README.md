# Заглушка
## Описание

Этот проект представляет собой заглушку для взаимодействия с Kafka, включающую отправку и получение сообщений через REST API.

## Инструкция к запуску

### Сборка проекта

```bash
mvn clean package
```

### Запуск проекта локально

```bash
java -jar target/Mock-0.0.1-SNAPSHOT.jar
```

С помощью параметро `timeout`  можно укзать задержку для получения сообщений из Kafka в миллисекундах (по умолчанию `timeout` = 100):

```bash
java -jar target/Mock-0.0.1-SNAPSHOT.jar --timeout=<get_response_time_in_milliseconds>
```

### Запуск заглушки в docker

В одной папке должны находится файлы `Dockerfile` и `Mock-0.0.1-SNAPSHOT.jar`.

Сборка Docker-образа:

```bash
docker build -t <название образа> .
```

Запуск контейнера:

```bash
docker run -p <mock_port>:8080 --name <название контейнера> --network <название сети кафки> -e spring.kafka.bootstrap-servers=<kafka_ip>:<kafka_port> -e timeout=<get_response_time_in_milliseconds> -e kafka.topic=<topic_name> <название образа>
```

> [!TIP]
> Для получения названия сети кафки используется команда `docker inspect kafka-kafka1-1 | grep Network`
