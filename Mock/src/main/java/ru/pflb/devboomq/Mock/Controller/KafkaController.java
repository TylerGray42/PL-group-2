package ru.pflb.devboomq.Mock.Controller;

import java.util.ArrayList;
import java.util.List;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.http.MediaType;
import org.springframework.kafka.annotation.KafkaListener;
import org.springframework.kafka.core.KafkaTemplate;
import org.springframework.web.bind.annotation.*;
import ru.pflb.devboomq.Mock.Model.RequestDTO;
import ru.pflb.devboomq.Mock.Model.ResponseDTO;

@RestController
@RequestMapping("/api/kafka")
public class KafkaController {

    @Autowired
    private KafkaTemplate<String, String> kafkaTemplate;

    @Value("${timeout}")
    String timeout;

    private final List<String> messages = new ArrayList<>();

    // Слушатель сообщений из Kafka на тему "group2" с идентификатором группы "group_id".
    // Сообщение добавляется в список messages.
    @KafkaListener(topics = "group2", groupId = "group_id")
    public void listen(String message) {
        synchronized (messages) {
            messages.add(message);
        }
    }

    // Обработчик POST-запроса для отправки сообщения в Kafka.
    @PostMapping(
        value = "/message",
        produces = MediaType.APPLICATION_JSON_VALUE,
        consumes = MediaType.APPLICATION_JSON_VALUE
    )
    public String sendMessage(@RequestBody RequestDTO requestDTO) {
        kafkaTemplate.send("group2", requestDTO.getMessage());
        return "Сообщение отправлено!\n";
    }

    // Обработчик GET-запроса для получения первого сообщения из списка.
    @GetMapping(value = "/message", produces = MediaType.APPLICATION_JSON_VALUE)
    public ResponseDTO getMessages() {
        synchronized (messages) {
            if (messages.isEmpty()) {
                return new ResponseDTO(); // Возвращаем пустой объект, если сообщений нет
            }

            // Извлекаем и удаляем первое сообщение из списка
            String firstMessage = messages.remove(0);

            // Создаем объект ResponseDTO с первым сообщением
            ResponseDTO responseDTO = new ResponseDTO();
            responseDTO.setMessage(firstMessage);

            try {
                Thread.sleep(Integer.parseInt(timeout));
            } catch (IllegalArgumentException | InterruptedException e) {
                e.printStackTrace();
            }

            return responseDTO;
        }
    }
}
