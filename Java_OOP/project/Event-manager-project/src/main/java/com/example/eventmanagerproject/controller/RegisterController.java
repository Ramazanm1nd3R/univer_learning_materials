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

public class RegisterController {

    @FXML private TextField nameField;
    @FXML private TextField emailField;
    @FXML private PasswordField passwordField;

    @FXML
    public void onRegisterClicked() {
        String name = nameField.getText();
        String email = emailField.getText();
        String password = passwordField.getText();

        if (name.isEmpty() || email.isEmpty() || password.isEmpty()) {
            showAlert("Заполните все поля");
            return;
        }

        User newUser = new User(name, email, password);
        Request request = new Request("REGISTER", newUser);
        Response response = ClientSocket.sendRequest(request);

        if (response.isSuccess()) {
            User registered = (User) response.getPayload();
            Session.setCurrentUser(registered);
            SessionManager.saveUserId(registered.getId());
            showAlert("Регистрация успешна!");
            close();
        } else {
            showAlert(response.getMessage());
        }
    }

    private void close() {
        Stage stage = (Stage) nameField.getScene().getWindow();
        stage.close();
    }

    private void showAlert(String msg) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setContentText(msg);
        alert.showAndWait();
    }
}
