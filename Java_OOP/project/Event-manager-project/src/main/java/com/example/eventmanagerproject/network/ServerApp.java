package com.example.eventmanagerproject.network;

import com.example.eventmanagerproject.db.EventDAO;
import com.example.eventmanagerproject.db.UserDAO;
import com.example.eventmanagerproject.model.Event;
import com.example.eventmanagerproject.model.User;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;
import java.util.Map;

public class ServerApp {

    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(9999)) {
            log("✅ Server started. Waiting for clients...");
            while (true) {
                Socket clientSocket = serverSocket.accept();
                log("👤 New client connected from " + clientSocket.getInetAddress().getHostAddress() + ":" + clientSocket.getPort());
                new Thread(() -> handleClient(clientSocket)).start();
            }
        } catch (Exception e) {
            log("❌ Server error: " + e.getMessage());
        }
    }

    private static void handleClient(Socket socket) {
        try (
                ObjectInputStream input = new ObjectInputStream(socket.getInputStream());
                ObjectOutputStream output = new ObjectOutputStream(socket.getOutputStream())
        ) {
            Request request = (Request) input.readObject();
            log("📩 Received request: " + request.getType());

            Response response = handleRequest(request);
            output.writeObject(response);

            log("✅ Response sent: " + response.getMessage());
        } catch (Exception e) {
            log("❌ Client error: " + e.getMessage());
        }
    }

    private static Response handleRequest(Request request) {
        UserDAO userDAO = new UserDAO();
        EventDAO eventDAO = new EventDAO();

        switch (request.getType()) {
            case "REGISTER":
                User newUser = (User) request.getPayload();
                boolean registered = userDAO.addUser(newUser);
                if (registered) {
                    User saved = userDAO.getUserByEmail(newUser.getEmail());
                    return new Response(true, saved, "Регистрация успешна");
                }
                return new Response(false, null, "Ошибка регистрации или email занят");

            case "LOGIN":
                @SuppressWarnings("unchecked")
                Map<String, String> credentials = (Map<String, String>) request.getPayload();
                User found = userDAO.getUserByEmail(credentials.get("email"));
                if (found != null && found.getPassword().equals(credentials.get("password"))) {
                    return new Response(true, found, "Вход выполнен");
                }
                return new Response(false, null, "Неверный логин или пароль");

            case "CREATE_EVENT":
                Event newEvent = (Event) request.getPayload();
                boolean added = eventDAO.addEvent(newEvent);
                return new Response(added, null, added ? "Мероприятие создано" : "Ошибка при создании мероприятия");

            case "GET_EVENTS":
                List<Event> events = eventDAO.getAllEvents();
                return new Response(true, events, "Список мероприятий загружен");

            case "COUNT_PARTICIPANTS":
                int eventId = (Integer) request.getPayload();
                int count = eventDAO.countParticipants(eventId);
                return new Response(true, count, "Участников: " + count);

            case "JOIN_EVENT":
                @SuppressWarnings("unchecked")
                Map<String, Integer> joinData = (Map<String, Integer>) request.getPayload();
                boolean joined = eventDAO.addParticipant(joinData.get("eventId"), joinData.get("userId"));
                return new Response(joined, null, joined ? "Вы участвуете!" : "Вы уже участвуете или ошибка");

            case "CHECK_PARTICIPATION":
                Map<String, Integer> check = (Map<String, Integer>) request.getPayload();
                boolean exists = eventDAO.isUserParticipant(check.get("eventId"), check.get("userId"));
                return new Response(exists, null, exists ? "Участвует" : "Не участвует");

            case "LEAVE_EVENT":
                Map<String, Integer> leave = (Map<String, Integer>) request.getPayload();
                boolean removed = eventDAO.removeParticipant(leave.get("eventId"), leave.get("userId"));
                return new Response(removed, null, removed ? "Участие отменено" : "Не удалось отменить участие");

            case "GET_USER_BY_ID":
                int id = (Integer) request.getPayload();
                User creator = userDAO.getUserById(id);
                if (creator != null) {
                    return new Response(true, creator, "Создатель найден");
                }
                return new Response(false, null, "Создатель не найден");

            default:
                return new Response(false, null, "Неизвестный тип запроса");
        }
    }

    private static void log(String message) {
        String time = new SimpleDateFormat("HH:mm:ss").format(new Date());
        System.out.println("[" + time + "] " + message);
    }
}
