package server;

import model.MessageData;
import java.io.ObjectInputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class ServerApp_1Task {
    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(1234)) {
            System.out.println("✅ Server started. Waiting for clients...");

            // Бесконечно слушаем входящие соединения
            while (true) {
                Socket socket = serverSocket.accept();
                System.out.println("👤 Client connected.");

                // Запускаем поток для обработки клиента
                new Thread(() -> {
                    try (ObjectInputStream inputStream = new ObjectInputStream(socket.getInputStream())) {
                        MessageData message = (MessageData) inputStream.readObject();
                        System.out.println("📩 Received message: " + message);
                    } catch (Exception e) {
                        System.out.println("❌ Error handling client: " + e.getMessage());
                    } finally {
                        try {
                            socket.close();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                }).start();
            }
        } catch (Exception e) {
            System.out.println("❌ Server error: " + e.getMessage());
        }
    }
}
