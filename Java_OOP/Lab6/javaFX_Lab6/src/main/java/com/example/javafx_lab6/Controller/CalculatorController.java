package com.example.javafx_lab6.Controller;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;

public class CalculatorController {

    @FXML
    private Label display;

    private StringBuilder currentInput = new StringBuilder();

    @FXML
    public void onNumberClick(ActionEvent event) {
        String number = ((Button) event.getSource()).getText();
        currentInput.append(number);
        updateDisplay();
    }

    @FXML
    public void onOperatorClick(ActionEvent event) {
        String op = ((Button) event.getSource()).getText();
        if (currentInput.length() == 0) return;
        char last = currentInput.charAt(currentInput.length() - 1);
        if ("+-*/".indexOf(last) >= 0) {
            currentInput.setCharAt(currentInput.length() - 1, op.charAt(0));
        } else {
            currentInput.append(op);
        }
        updateDisplay();
    }

    @FXML
    public void onClear() {
        currentInput.setLength(0);
        updateDisplay();
    }

    @FXML
    public void onEquals() {
        try {
            String result = eval(currentInput.toString());
            currentInput = new StringBuilder(result);
            updateDisplay();
        } catch (Exception e) {
            display.setText("Error");
        }
    }

    @FXML
    public void onDot() {
        currentInput.append(".");
        updateDisplay();
    }

    private void updateDisplay() {
        display.setText(currentInput.toString());
    }

    private String eval(String expression) {
        // Простой безопасный парсер
        double result = new Object() {
            int pos = -1, ch;

            void nextChar() {
                ch = (++pos < expression.length()) ? expression.charAt(pos) : -1;
            }

            boolean eat(int charToEat) {
                while (ch == ' ') nextChar();
                if (ch == charToEat) {
                    nextChar();
                    return true;
                }
                return false;
            }

            double parse() {
                nextChar();
                double x = parseExpression();
                if (pos < expression.length()) throw new RuntimeException("Unexpected: " + (char) ch);
                return x;
            }

            double parseExpression() {
                double x = parseTerm();
                while (true) {
                    if (eat('+')) x += parseTerm();
                    else if (eat('-')) x -= parseTerm();
                    else return x;
                }
            }

            double parseTerm() {
                double x = parseFactor();
                while (true) {
                    if (eat('*')) x *= parseFactor();
                    else if (eat('/')) x /= parseFactor();
                    else return x;
                }
            }

            double parseFactor() {
                if (eat('+')) return parseFactor();
                if (eat('-')) return -parseFactor();

                double x;
                int startPos = this.pos;
                if ((ch >= '0' && ch <= '9') || ch == '.') {
                    while ((ch >= '0' && ch <= '9') || ch == '.') nextChar();
                    x = Double.parseDouble(expression.substring(startPos, this.pos));
                } else {
                    throw new RuntimeException("Unexpected: " + (char) ch);
                }
                return x;
            }
        }.parse();
        return String.valueOf(result);
    }
}
