package com.example.eventmanagerproject.app;

import com.example.eventmanagerproject.model.Event;
import com.example.eventmanagerproject.network.ClientSocket;
import com.example.eventmanagerproject.network.Request;
import com.example.eventmanagerproject.network.Response;
import com.example.eventmanagerproject.util.LocalStorageUtil;
import com.example.eventmanagerproject.util.SessionManager;
import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.util.List;

public class MainApp extends Application {

    @Override
    public void start(Stage stage) throws Exception {
        SessionManager.loadSession();

        // ⚠️ Выполним синхронизацию до загрузки с сервера
        autoSyncPendingEvents();

        // 1. Подгружаем с сервера и сохраняем локально
        Response response = ClientSocket.sendRequest(new Request("GET_EVENTS", null));
        if (response.isSuccess()) {
            List<Event> serverEvents = (List<Event>) response.getPayload();
            LocalStorageUtil.saveEvents(serverEvents);
        }

        FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("/com/example/eventmanagerproject/views/main-view.fxml"));
        Scene scene = new Scene(fxmlLoader.load(), 800, 600);
        stage.setTitle("Event Manager");
        stage.setScene(scene);
        stage.show();
    }

    @Override
    public void stop() {
        System.out.println("🛑 Приложение закрывается. Проверка несинхронизированных ивентов...");
        autoSyncPendingEvents();
    }

    private void autoSyncPendingEvents() {
        List<Event> pending = LocalStorageUtil.getUnsyncedEvents();
        if (!pending.isEmpty()) {
            System.out.println("🔄 Автоматическая синхронизация перед выходом...");
            boolean allSynced = true;
            for (Event e : pending) {
                Response res = ClientSocket.sendRequest(new Request("CREATE_EVENT", e));
                if (!res.isSuccess()) {
                    allSynced = false;
                    System.out.println("❌ Не удалось синхронизировать: " + e.getTitle());
                    break;
                }
            }
            if (allSynced) {
                LocalStorageUtil.removeSyncedEvents();
                System.out.println("✅ Все мероприятия успешно синхронизированы");
            } else {
                System.out.println("⚠️ Некоторые мероприятия остались несинхронизированными");
            }
        } else {
            System.out.println("ℹ️ Нет мероприятий для синхронизации");
        }
    }
}
