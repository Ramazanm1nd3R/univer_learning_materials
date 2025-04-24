package server;

import model.Book;
import model.PackageData;
import util.BookFileUtil;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.util.ArrayList;

public class ClientHandler extends Thread {
    private final Socket socket;

    public ClientHandler(Socket socket) {
        this.socket = socket;
    }

    @Override
    public void run() {
        try (
                ObjectInputStream in = new ObjectInputStream(socket.getInputStream());
                ObjectOutputStream out = new ObjectOutputStream(socket.getOutputStream())
        ) {
            while (true) {
                PackageData request = (PackageData) in.readObject();
                if (request == null || "EXIT".equals(request.getOperationType())) break;

                switch (request.getOperationType()) {
                    case "LIST" -> {
                        ArrayList<Book> books = BookFileUtil.readBooks();
                        out.writeObject(new PackageData("LIST_RESULT", null, books));
                        out.flush();
                    }
                    case "ADD" -> {
                        ArrayList<Book> books = BookFileUtil.readBooks();
                        books.add(request.getBook());
                        BookFileUtil.saveBooks(books);
                        out.writeObject(new PackageData("ADD_RESULT", request.getBook(), null));
                        out.flush();
                    }
                }
            }
        } catch (Exception e) {
            System.out.println("❌ Client disconnected: " + e.getMessage());
        }
    }
}
