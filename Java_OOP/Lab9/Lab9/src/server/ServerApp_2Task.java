package server;

import java.net.ServerSocket;
import java.net.Socket;

public class ServerApp_2Task {
    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(5678)) {
            System.out.println("📡 Server running on port 5678...");
            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("👤 New client connected");
                new ClientHandler(clientSocket).start();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}