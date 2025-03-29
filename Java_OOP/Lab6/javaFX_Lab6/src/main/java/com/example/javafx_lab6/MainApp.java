package com.example.javafx_lab6;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class MainApp extends Application {
    @Override
    public void start(Stage primaryStage) throws Exception {
        FXMLLoader loader = new FXMLLoader(getClass().getResource("/fxml/main-view.fxml"));
        Parent root = loader.load(); // загружаем только один раз

        Scene scene = new Scene(root, 600, 400); // создаём сцену

        primaryStage.setTitle("JavaFX Lab 6");
        primaryStage.setScene(scene);           // устанавливаем один раз
        primaryStage.show();                    // показываем
    }

    public static void main(String[] args) {
        launch(args);
    }
}