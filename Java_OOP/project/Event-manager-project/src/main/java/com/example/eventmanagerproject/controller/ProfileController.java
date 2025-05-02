package com.example.eventmanagerproject.controller;

import com.example.eventmanagerproject.util.Session;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;

import java.io.IOException;

public class ProfileController {

    @FXML
    private Label nameLabel;

    @FXML
    private Label emailLabel;

    @FXML
    public void initialize() {
        if (Session.getCurrentUser() != null) {
            nameLabel.setText("Имя: " + Session.getCurrentUser().getName());
            emailLabel.setText("Email: " + Session.getCurrentUser().getEmail());
        }
    }

    @FXML
    public void onBackClicked() {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/main-view.fxml"));
            BorderPane mainRoot = loader.load();

            // Получаем текущий BorderPane из сцены и подменяем центр
            BorderPane currentRoot = (BorderPane) nameLabel.getScene().getRoot();
            currentRoot.setCenter(mainRoot.getCenter());

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
