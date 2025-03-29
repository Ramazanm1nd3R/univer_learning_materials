package com.example.javafx_lab6.Controller;

import javafx.fxml.FXML;
import javafx.scene.control.ChoiceBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

public class ConverterController {

    @FXML
    private TextField inputField;

    @FXML
    private Label resultLabel;

    @FXML
    private ChoiceBox<String> modeSelector;

    @FXML
    public void initialize() {
        modeSelector.getItems().addAll("Miles to Kilometers", "Kilometers to Miles");
        modeSelector.setValue("Miles to Kilometers"); // default value
    }

    @FXML
    public void convert() {
        String inputText = inputField.getText();
        if (inputText == null || inputText.isEmpty()) {
            resultLabel.setText("Please enter a value.");
            return;
        }

        try {
            double input = Double.parseDouble(inputText);
            String mode = modeSelector.getValue();
            double result;

            if ("Miles to Kilometers".equals(mode)) {
                result = input * 1.60934;
                resultLabel.setText(String.format("%.2f miles = %.2f km", input, result));
            } else {
                result = input / 1.60934;
                resultLabel.setText(String.format("%.2f km = %.2f miles", input, result));
            }

        } catch (NumberFormatException e) {
            resultLabel.setText("Invalid number.");
        }
    }
}
