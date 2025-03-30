package com.example.javafx_lab6.Controller;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;

public class CalculatorController {

    @FXML
    private Label display;

    private StringBuilder currentInput = new StringBuilder();
    private double lastResult = 0;
    private String lastOperator = "";
    private boolean isNewInput = true;

    @FXML
    public void onNumberClick(ActionEvent event) {
        String number = ((Button) event.getSource()).getText();
        if (isNewInput) {
            currentInput.setLength(0);
            isNewInput = false;
        }
        currentInput.append(number);
        updateDisplay();
    }

    @FXML
    public void onOperatorClick(ActionEvent event) {
        String op = ((Button) event.getSource()).getText();

        if (!lastOperator.isEmpty() && !isNewInput) {
            onEquals(); // выполнить предыдущую операцию
        }

        try {
            lastResult = Double.parseDouble(currentInput.toString());
        } catch (Exception ignored) {
            lastResult = 0;
        }

        lastOperator = op;
        isNewInput = true;
    }

    @FXML
    public void onEquals() {
        if (lastOperator.isEmpty() || isNewInput) return;

        try {
            double secondOperand = Double.parseDouble(currentInput.toString());
            switch (lastOperator) {
                case "+" -> lastResult += secondOperand;
                case "-" -> lastResult -= secondOperand;
                case "*" -> lastResult *= secondOperand;
                case "/" -> lastResult /= secondOperand;
            }
            currentInput = new StringBuilder(String.valueOf(lastResult));
            lastOperator = "";
            updateDisplay();
            isNewInput = true;
        } catch (Exception e) {
            display.setText("Error");
        }
    }

    @FXML
    public void onClear() {
        currentInput.setLength(0);
        lastOperator = "";
        lastResult = 0;
        isNewInput = true;
        updateDisplay();
    }

    @FXML
    public void onDot() {
        if (isNewInput) {
            currentInput.setLength(0);
            currentInput.append("0");
            isNewInput = false;
        }
        if (!currentInput.toString().contains(".")) {
            currentInput.append(".");
        }
        updateDisplay();
    }

    @FXML
    public void onToggleSign() {
        if (currentInput.length() == 0) return;

        try {
            double value = Double.parseDouble(currentInput.toString());
            value *= -1;
            currentInput = new StringBuilder(String.valueOf(value));
            updateDisplay();
        } catch (Exception e) {
            display.setText("Error");
        }
    }

    @FXML
    public void onPercent() {
        try {
            double value = Double.parseDouble(currentInput.toString());
            value = value / 100;
            currentInput = new StringBuilder(String.valueOf(value));
            updateDisplay();
        } catch (Exception e) {
            display.setText("Error");
        }
    }

    private void updateDisplay() {
        display.setText(currentInput.toString());
    }
}
