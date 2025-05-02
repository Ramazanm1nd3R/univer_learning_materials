package com.example.eventmanagerproject.controller;

import com.example.eventmanagerproject.model.Event;
import com.example.eventmanagerproject.util.LocalStorageUtil;
import com.example.eventmanagerproject.util.Session;
import javafx.collections.FXCollections;
import javafx.fxml.FXMLLoader;
import javafx.fxml.FXML;
import javafx.scene.control.*;
import javafx.stage.Stage;
import javafx.scene.Scene;

import java.io.IOException;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

public class CreateEventController {

    @FXML private TextField titleField;
    @FXML private TextArea descriptionField;
    @FXML private TextField locationField;
    @FXML private DatePicker datePicker;
    @FXML private ComboBox<LocalTime> timeComboBox;

    @FXML
    public void initialize() {
        List<LocalTime> timeOptions = new ArrayList<>();
        for (int hour = 0; hour < 24; hour++) {
            timeOptions.add(LocalTime.of(hour, 0));
            timeOptions.add(LocalTime.of(hour, 30));
        }
        timeComboBox.setItems(FXCollections.observableArrayList(timeOptions));
    }

    @FXML
    public void onSaveClicked() {
        String title = titleField.getText();
        String description = descriptionField.getText();
        String location = locationField.getText();
        LocalDate date = datePicker.getValue();
        LocalTime time = timeComboBox.getValue();

        if (title.isEmpty() || description.isEmpty() || location.isEmpty() || date == null || time == null) {
            showAlert("Пожалуйста, заполните все поля, включая дату и время.");
            return;
        }

        if (Session.getCurrentUser() == null) {
            showAlert("Вы не авторизованы! Сначала войдите в систему.");
            return;
        }

        LocalDateTime dateTime = LocalDateTime.of(date, time);
        int creatorId = Session.getCurrentUser().getId();

        Event event = new Event(0, title, description, dateTime, location, creatorId);
        LocalStorageUtil.addEventLocally(event);

        showAlert("✅ Мероприятие добавлено локально. Нажмите 'Синхронизировать' для отправки в БД.");
        clearFields();
    }

    private void showAlert(String msg) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setContentText(msg);
        alert.showAndWait();
    }

    private void clearFields() {
        titleField.clear();
        descriptionField.clear();
        locationField.clear();
        datePicker.setValue(null);
        timeComboBox.setValue(null);
    }

    @FXML
    public void onBackClicked() {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/main-view.fxml"));
            Scene mainScene = new Scene(loader.load());
            mainScene.getStylesheets().add(getClass().getResource("/com/example/eventmanagerproject/styles/styles.css").toExternalForm());
            Stage currentStage = (Stage) titleField.getScene().getWindow();
            currentStage.setScene(mainScene);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
