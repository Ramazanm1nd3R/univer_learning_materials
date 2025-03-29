package com.example.javafx_lab6.Controller;

import javafx.animation.KeyFrame;
import javafx.animation.Timeline;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.util.Duration;

public class StopwatchController {

    @FXML
    private Label timeLabel;

    @FXML
    private Button startPauseButton;

    @FXML
    private Button clearButton;

    private int seconds = 0;
    private Timeline timeline;
    private boolean running = false;

    @FXML
    public void initialize() {
        updateLabel();
        timeline = new Timeline(new KeyFrame(Duration.seconds(1), event -> {
            seconds++;
            updateLabel();
        }));
        timeline.setCycleCount(Timeline.INDEFINITE);
    }

    @FXML
    public void handleStartPause() {
        if (!running) {
            timeline.play();
            running = true;
            startPauseButton.setText("Pause");
        } else {
            timeline.pause();
            running = false;
            startPauseButton.setText("Resume");
        }
    }

    @FXML
    public void handleClear() {
        timeline.stop();
        running = false;
        seconds = 0;
        updateLabel();
        startPauseButton.setText("Start");
    }

    private void updateLabel() {
        int h = seconds / 3600;
        int m = (seconds % 3600) / 60;
        int s = seconds % 60;
        timeLabel.setText(String.format("%02d:%02d:%02d", h, m, s));
    }
}
