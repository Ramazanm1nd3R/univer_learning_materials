module com.example.javafx_lab6 {
    requires javafx.controls;
    requires javafx.fxml;

    opens com.example.javafx_lab6 to javafx.fxml;
    opens com.example.javafx_lab6.Controller to javafx.fxml;

    exports com.example.javafx_lab6;
}
