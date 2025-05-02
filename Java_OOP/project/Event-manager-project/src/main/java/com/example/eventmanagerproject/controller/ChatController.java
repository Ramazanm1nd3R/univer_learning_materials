package com.example.eventmanagerproject.controller;

import com.example.eventmanagerproject.db.MessageDAO;
import com.example.eventmanagerproject.model.Event;
import com.example.eventmanagerproject.model.Message;
import com.example.eventmanagerproject.util.Session;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.stage.Stage;
import java.time.format.DateTimeFormatter;
import java.io.IOException;
import java.time.LocalDateTime;
import java.util.List;

public class ChatController {

    @FXML private Label eventTitle;
    @FXML private ListView<String> messageListView;
    @FXML private TextField messageField;

    private Event currentEvent;
    private final MessageDAO messageDAO = new MessageDAO();

    private boolean isCreator(String senderName, int creatorId) {
        return Session.getCurrentUser() != null &&
                Session.getCurrentUser().getName().equals(senderName) &&
                Session.getCurrentUser().getId() == creatorId;
    }

    public void setEvent(Event event) {
        this.currentEvent = event;
        eventTitle.setText("Чат мероприятия: " + event.getTitle());
        loadMessages();
    }

    private void loadMessages() {
        messageListView.getItems().clear();
        List<Message> messages = messageDAO.getMessagesByEventId(currentEvent.getId());
        int creatorId = currentEvent.getCreatorId();

        for (Message msg : messages) {
            String label = msg.getSender();
            if (isCreator(label, creatorId)) {
                label += " (Создатель)";
            }
            String formatted = msg.getTimestamp().toLocalTime() + " | " + label + ": " + msg.getContent();
            messageListView.getItems().add(formatted);
        }
    }



    @FXML
    public void onSendClicked() {
        String content = messageField.getText().trim();
        if (content.isEmpty()) return;

        Message message = new Message(Session.getCurrentUser().getName(), content, LocalDateTime.now());
        boolean saved = messageDAO.addMessage(currentEvent.getId(), message);

        if (saved) {
            DateTimeFormatter timeFormatter = DateTimeFormatter.ofPattern("HH:mm");
            String formattedTime = message.getTimestamp().format(timeFormatter);

            messageListView.getItems().add(formattedTime + " | " +
                    message.getSender() + ": " + message.getContent());

            messageField.clear();
        } else {
            showAlert("Не удалось отправить сообщение.");
        }
    }


    private void showAlert(String msg) {
        Alert alert = new Alert(Alert.AlertType.ERROR);
        alert.setContentText(msg);
        alert.showAndWait();
    }

    public static void openChatWindow(Event event) {
        try {
            FXMLLoader loader = new FXMLLoader(ChatController.class.getResource("/com/example/eventmanagerproject/views/event-chat.fxml"));
            Scene scene = new Scene(loader.load());

            ChatController controller = loader.getController();
            controller.setEvent(event);

            Stage stage = new Stage();
            stage.setTitle("Чат мероприятия");
            stage.setScene(scene);
            stage.show();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
