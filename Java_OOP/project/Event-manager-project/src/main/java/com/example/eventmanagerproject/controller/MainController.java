package com.example.eventmanagerproject.controller;

import com.example.eventmanagerproject.model.Event;
import com.example.eventmanagerproject.network.ClientSocket;
import com.example.eventmanagerproject.network.Request;
import com.example.eventmanagerproject.network.Response;
import com.example.eventmanagerproject.util.LocalStorageUtil;
import com.example.eventmanagerproject.util.Session;
import com.example.eventmanagerproject.util.SessionManager;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.control.*;
import javafx.scene.input.MouseButton;
import javafx.scene.layout.StackPane;
import javafx.scene.Scene;
import javafx.stage.Stage;
import javafx.scene.layout.VBox;
import javafx.stage.Window;
import java.io.IOException;
import java.util.List;

public class MainController {

    @FXML private Button createEventButton;
    @FXML private Button loginButton;
    @FXML private Button registerButton;
    @FXML private ListView<String> eventListView;
    @FXML private Label userLabel;
    @FXML private StackPane contentPane;
    @FXML private VBox mainContent;

    @FXML
    public void initialize() {
        loadLocalEvents();  // загружаем ивенты для всех

        boolean isLoggedIn = Session.getCurrentUser() != null;
        createEventButton.setDisable(!isLoggedIn);
        loginButton.setVisible(!isLoggedIn);
        registerButton.setVisible(!isLoggedIn);

        if (isLoggedIn) {
            updateUserLabel();
        } else {
            userLabel.setText("Вы не вошли");
        }

        eventListView.setOnMouseClicked(event -> {
            if (event.getClickCount() == 2) {
                int index = eventListView.getSelectionModel().getSelectedIndex();
                if (index >= 0) {
                    Event selectedEvent = LocalStorageUtil.getAllEvents().get(index);
                    openEventDetails(selectedEvent);
                }
            }
        });
    }

    private void updateUserLabel() {
        userLabel.setText("👤 " + Session.getCurrentUser().getName());

        userLabel.setOnMouseClicked(e -> {
            if (e.getButton() == MouseButton.PRIMARY) {
                ContextMenu menu = new ContextMenu();

                MenuItem profileItem = new MenuItem("Профиль");
                profileItem.setOnAction(ev -> openProfile());

                MenuItem logoutItem = new MenuItem("Выйти");
                logoutItem.setOnAction(ev -> {
                    Session.clear();
                    SessionManager.clearSession();
                    reload();
                });

                menu.getItems().addAll(profileItem, logoutItem);
                menu.show(userLabel, e.getScreenX(), e.getScreenY());
            }
        });
    }

    private void openProfile() {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/profile-view.fxml"));
            Node profileView = loader.load();
            contentPane.getChildren().setAll(profileView);
        } catch (IOException e) {
            showAlert("Ошибка загрузки профиля");
            e.printStackTrace();
        }
    }

    private void openEventDetails(Event event) {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/event-details.fxml"));
            Node detailsView = loader.load();

            EventDetailsController controller = loader.getController();
            controller.setEvent(event);

            contentPane.getChildren().setAll(detailsView);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @FXML
    private void reload() {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/main-view.fxml"));
            Scene newScene = new Scene(loader.load());

            // Безопасно ищем текущий Stage через любую кнопку (если есть), иначе fallback
            Stage stage;
            if (contentPane != null && contentPane.getScene() != null) {
                stage = (Stage) contentPane.getScene().getWindow();
            } else {
                // fallback для случаев, когда contentPane не в сцене
                stage = (Stage) Stage.getWindows().stream().filter(Window::isShowing).findFirst().orElse(null);
            }

            if (stage != null) {
                stage.setScene(newScene);
                stage.show();
            } else {
                System.err.println("Не удалось найти активное окно для перезагрузки.");
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }


    private void loadLocalEvents() {
        eventListView.getItems().clear();
        List<Event> events = LocalStorageUtil.getAllEvents();
        for (Event e : events) {
            int participants = getParticipantCount(e.getId());
            eventListView.getItems().add(
                    String.format("%s (%s)\n%s\n👥 Участников: %d",
                            e.getTitle(), e.getDate().toLocalDate(), e.getLocation(), participants)
            );
        }
    }

    private int getParticipantCount(int eventId) {
        Response response = ClientSocket.sendRequest(new Request("COUNT_PARTICIPANTS", eventId));
        if (response.isSuccess() && response.getPayload() instanceof Integer) {
            return (Integer) response.getPayload();
        }
        return 0;
    }

    @FXML
    public void onCreateEventClicked() {
        if (Session.getCurrentUser() == null) {
            showAlert("Вы не авторизованы. Пожалуйста, войдите.");
            return;
        }

        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/create-event.fxml"));
            Node createView = loader.load();
            contentPane.getChildren().setAll(createView);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @FXML
    public void onRegisterClicked() {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/register.fxml"));
            Scene scene = new Scene(loader.load());
            Stage stage = new Stage();
            stage.setTitle("Регистрация");
            stage.setScene(scene);
            stage.showAndWait();

            if (Session.getCurrentUser() != null) {
                reload();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @FXML
    public void onLoginClicked() {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/login.fxml"));
            Scene scene = new Scene(loader.load());
            Stage stage = new Stage();
            stage.setTitle("Вход");
            stage.setScene(scene);
            stage.showAndWait();

            if (Session.getCurrentUser() != null) {
                reload();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @FXML
    public void onSyncClicked() {
        List<Event> pending = LocalStorageUtil.getUnsyncedEvents();
        if (pending.isEmpty()) {
            showAlert("Нет локальных мероприятий для синхронизации.");
            return;
        }

        boolean allSuccess = true;
        for (Event e : pending) {
            Response response = ClientSocket.sendRequest(new Request("CREATE_EVENT", e));
            if (!response.isSuccess()) {
                allSuccess = false;
                showAlert("Ошибка при синхронизации: " + response.getMessage());
                break;
            }
        }

        if (allSuccess) {
            LocalStorageUtil.removeSyncedEvents();
            showAlert("✅ Все локальные мероприятия успешно отправлены!");
            reload();
        }
    }

    private void showAlert(String message) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle("Информация");
        alert.setHeaderText(null);
        alert.setContentText(message);
        alert.showAndWait();
    }
}