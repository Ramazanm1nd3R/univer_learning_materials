package com.example.javafx_lab6.Controller;

import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;

public class MainController {

    @FXML
    private StackPane contentPane;

    @FXML
    private VBox initialButtons;

    @FXML
    private HBox topMenu;

    private boolean menuShown = false;

    public void showConverter() {
        revealMenuIfFirstTime();
        loadView("/fxml/converter-view.fxml");
    }

    public void showStopwatch() {
        revealMenuIfFirstTime();
        loadView("/fxml/stopwatch-view.fxml");
    }

    public void showCalculator() {
        revealMenuIfFirstTime();
        loadView("/fxml/calculator-view.fxml");
    }

    private void loadView(String fxmlPath) {
        try {
            Node node = FXMLLoader.load(getClass().getResource(fxmlPath));
            contentPane.getChildren().setAll(node);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void revealMenuIfFirstTime() {
        if (!menuShown && initialButtons != null && topMenu != null) {
            initialButtons.setVisible(false);
            initialButtons.setManaged(false);
            topMenu.setVisible(true);
            topMenu.setManaged(true);
            menuShown = true;
        }
    }
}
