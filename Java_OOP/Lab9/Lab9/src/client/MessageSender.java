package client;

import model.MessageData;

import java.io.ObjectOutputStream;
import java.net.Socket;
import java.util.Date;
import java.util.Scanner;

public class MessageSender {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String userName = askUsername(scanner);

        while (true) {
            System.out.println("""
                PRESS [1] TO SEND MESSAGE
                PRESS [2] TO LOGOUT
                PRESS [3] TO EXIT
                """);

            String choice = scanner.nextLine();

            switch (choice) {
                case "1" -> {
                    System.out.print("Insert message text: ");
                    String messageText = scanner.nextLine();

                    try (Socket socket = new Socket("localhost", 1234);
                         ObjectOutputStream outputStream = new ObjectOutputStream(socket.getOutputStream())) {

                        MessageData message = new MessageData(userName, messageText, new Date());
                        outputStream.writeObject(message);
                        System.out.println("✅ Message sent!");
                    } catch (Exception e) {
                        System.out.println("❌ Failed to send message: " + e.getMessage());
                    }
                }

                case "2" -> {
                    // Перезапрос имени пользователя
                    System.out.println("🔁 Logging out...");
                    userName = askUsername(scanner);
                }

                case "3" -> {
                    System.out.println("👋 Exiting client.");
                    return;
                }

                default -> System.out.println("Invalid option. Try again.");
            }
        }
    }

    private static String askUsername(Scanner scanner) {
        System.out.print("Enter your username: ");
        return scanner.nextLine();
    }
}
