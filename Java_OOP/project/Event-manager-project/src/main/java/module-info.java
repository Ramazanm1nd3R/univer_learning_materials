module com.example.eventmanagerproject {
    // JavaFX
    requires javafx.controls;
    requires javafx.fxml;

    // JDBC
    requires java.sql;

    // Открытие пакетов для FXML и сериализации (если используешь Jackson/FX reflection)
    opens com.example.eventmanagerproject.controller to javafx.fxml;
    opens com.example.eventmanagerproject.model to javafx.base; // если модели участвуют в биндинге
    opens com.example.eventmanagerproject.db;
    opens com.example.eventmanagerproject.network;

    // Экспортируем точку входа
    exports com.example.eventmanagerproject.app;
}
