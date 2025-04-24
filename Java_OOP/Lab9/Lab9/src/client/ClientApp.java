package client;

import model.Book;
import model.PackageData;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.util.ArrayList;
import java.util.Scanner;

public class ClientApp {
    public static void main(String[] args) {
        try (
                Socket socket = new Socket("localhost", 5678);
                ObjectOutputStream out = new ObjectOutputStream(socket.getOutputStream());
                ObjectInputStream in = new ObjectInputStream(socket.getInputStream());
                Scanner scanner = new Scanner(System.in)
        ) {
            while (true) {
                System.out.println("""
                    📘 BOOK MENU:
                    [1] LIST BOOKS
                    [2] ADD BOOK
                    [0] EXIT
                    """);

                int choice = scanner.nextInt();
                scanner.nextLine(); // consume leftover newline

                if (choice == 1) {
                    out.writeObject(new PackageData("LIST", null, null));
                    out.flush();

                    PackageData response = (PackageData) in.readObject();
                    ArrayList<Book> books = response.getBooks();

                    if (books == null || books.isEmpty()) {
                        System.out.println("📭 No books found.");
                    } else {
                        for (Book book : books) {
                            System.out.println(book);
                        }
                    }

                } else if (choice == 2) {
                    System.out.print("Enter book id: ");
                    int id = Integer.parseInt(scanner.nextLine());

                    System.out.print("Enter book name: ");
                    String name = scanner.nextLine();

                    System.out.print("Enter author name: ");
                    String author = scanner.nextLine();

                    Book book = new Book(id, name, author);
                    out.writeObject(new PackageData("ADD", book, null));
                    out.flush();

                    PackageData response = (PackageData) in.readObject();
                    System.out.println("✅ Book added: " + response.getBook());

                } else if (choice == 0) {
                    out.writeObject(new PackageData("EXIT", null, null));
                    out.flush();
                    System.out.println("👋 Disconnected from server.");
                    break;
                } else {
                    System.out.println("❗ Invalid option.");
                }
            }

        } catch (Exception e) {
            System.out.println("❌ Could not connect to server: " + e.getMessage());
        }
    }
}
