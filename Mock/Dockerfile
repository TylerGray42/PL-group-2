# Используем базовый образ с JDK 17
FROM openjdk:17-jdk-alpine

# Указываем рабочую директорию внутри контейнера
WORKDIR /app

# Копируем jar-файл в контейнер
COPY Mock-0.0.1-SNAPSHOT.jar /app/Mock-0.0.1-SNAPSHOT.jar

# Открываем порт 8084 для внешнего доступа
EXPOSE 8082

# Определяем команду запуска приложения
CMD ["java", "-jar", "/app/Mock-0.0.1-SNAPSHOT.jar"]
