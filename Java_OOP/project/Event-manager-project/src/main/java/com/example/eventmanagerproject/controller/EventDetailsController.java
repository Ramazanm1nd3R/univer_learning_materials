package com.example.eventmanagerproject.controller;

import com.example.eventmanagerproject.model.Event;
import com.example.eventmanagerproject.model.User;
import com.example.eventmanagerproject.network.ClientSocket;
import com.example.eventmanagerproject.network.Request;
import com.example.eventmanagerproject.network.Response;
import com.example.eventmanagerproject.util.Session;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

import java.io.IOException;
import java.time.format.DateTimeFormatter;
import java.util.HashMap;
import java.util.Map;

public class EventDetailsController {

    @FXML private Label titleLabel;
    @FXML private Label dateLabel;
    @FXML private Label locationLabel;
    @FXML private Label creatorLabel;
    @FXML private TextArea descriptionArea;
    @FXML private Button actionButton;

    private Event event;
    private boolean isParticipating;

    public void setEvent(Event event) {
        this.event = event;

        titleLabel.setText(event.getTitle());
        dateLabel.setText("Дата: " + event.getDate().format(DateTimeFormatter.ofPattern("dd.MM.yyyy HH:mm")));
        locationLabel.setText("Локация: " + event.getLocation());
        descriptionArea.setText(event.getDescription());

        loadCreatorName(); // Загружаем имя создателя
        checkParticipation();
    }

    private void loadCreatorName() {
        Response response = ClientSocket.sendRequest(new Request("GET_USER_BY_ID", event.getCreatorId()));
        if (response.isSuccess() && response.getPayload() instanceof User creator) {
            creatorLabel.setText("Создатель: " + creator.getName());
        } else {
            creatorLabel.setText("Создатель: неизвестен");
        }
    }

    private void checkParticipation() {
        User user = Session.getCurrentUser();
        if (user == null) {
            actionButton.setText("Войти для участия");
            actionButton.setDisable(true);
            return;
        }

        Map<String, Integer> payload = new HashMap<>();
        payload.put("eventId", event.getId());
        payload.put("userId", user.getId());

        Response response = ClientSocket.sendRequest(new Request("CHECK_PARTICIPATION", payload));
        isParticipating = response.isSuccess();
        actionButton.setText(isParticipating ? "Отменить участие" : "Участвовать");
    }

    @FXML
    public void onActionClicked() {
        if (Session.getCurrentUser() == null) return;

        Map<String, Integer> payload = new HashMap<>();
        payload.put("eventId", event.getId());
        payload.put("userId", Session.getCurrentUser().getId());

        String actionType = isParticipating ? "LEAVE_EVENT" : "JOIN_EVENT";
        Response response = ClientSocket.sendRequest(new Request(actionType, payload));

        if (response.isSuccess()) {
            isParticipating = !isParticipating;
            actionButton.setText(isParticipating ? "Отменить участие" : "Участвовать");
            showAlert("✅ " + response.getMessage());
        } else {
            showAlert("❌ " + response.getMessage());
        }
    }

    @FXML
    public void onBackClicked() {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/main-view.fxml"));
            BorderPane mainRoot = loader.load();
            mainRoot.getStylesheets().add(getClass().getResource("/com/example/eventmanagerproject/styles/styles.css").toExternalForm());
            BorderPane currentRoot = (BorderPane) actionButton.getScene().getRoot();
            currentRoot.setCenter(mainRoot.getCenter());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @FXML
    public void onChatClicked() {
        User currentUser = Session.getCurrentUser();
        if (currentUser == null) {
            showAlert("❗ Для доступа к чату необходимо авторизоваться.");
            return;
        }

        if (!isParticipating && currentUser.getId() != event.getCreatorId()) {
            showAlert("❗ Вы не участвуете в этом мероприятии.");
            return;
        }

        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/event-chat.fxml"));
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


    private void showAlert(String msg) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setContentText(msg);
        alert.showAndWait();
    }
}
