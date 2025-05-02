package com.example.eventmanagerproject.controller;

import com.example.eventmanagerproject.model.User;
import com.example.eventmanagerproject.network.ClientSocket;
import com.example.eventmanagerproject.network.Request;
import com.example.eventmanagerproject.network.Response;
import com.example.eventmanagerproject.util.Session;
import com.example.eventmanagerproject.util.SessionManager;
import javafx.fxml.FXML;
import javafx.scene.control.*;
import javafx.stage.Stage;

import java.util.HashMap;
import java.util.Map;

public class LoginController {

    @FXML private TextField emailField;
    @FXML private PasswordField passwordField;

    @FXML
    public void onLoginClicked() {
        String email = emailField.getText();
        String password = passwordField.getText();

        if (email.isEmpty() || password.isEmpty()) {
            showAlert("Введите email и пароль");
            return;
        }

        Map<String, String> credentials = new HashMap<>();
        credentials.put("email", email);
        credentials.put("password", password);

        Request request = new Request("LOGIN", credentials);
        Response response = ClientSocket.sendRequest(request);

        if (response.isSuccess()) {
            User logged = (User) response.getPayload();
            Session.setCurrentUser(logged);
            SessionManager.saveUserId(logged.getId());
            showAlert("Успешный вход!");
            close();
        } else {
            showAlert(response.getMessage());
        }
    }

    private void close() {
        Stage stage = (Stage) emailField.getScene().getWindow();
        stage.close();
    }

    private void showAlert(String msg) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setContentText(msg);
        alert.showAndWait();
    }
}
