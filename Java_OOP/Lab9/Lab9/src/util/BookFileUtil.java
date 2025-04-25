package util;

import model.Book;

import java.io.*;
import java.util.ArrayList;

public class BookFileUtil {
    private static final String FILE_NAME = "storage/booklist.dat";

    public static ArrayList<Book> readBooks() {
        ArrayList<Book> books = new ArrayList<>();
        File file = new File(FILE_NAME);
        if (!file.exists()) return books; // Если файла нет, вернуть пустой список
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(file))) {
            Object obj = ois.readObject();
            if (obj instanceof ArrayList) {
                books = (ArrayList<Book>) obj;
            }
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("⚠️ Could not read book list: " + e.getMessage());
        }
        return books;
    }

    public static void saveBooks(ArrayList<Book> books) {
        try {
            File storageDir = new File("storage");
            if (!storageDir.exists()) storageDir.mkdirs(); // Создание директории

            try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(FILE_NAME))) {
                oos.writeObject(books);
            }
        } catch (IOException e) {
            System.out.println("⚠️ Could not save book list: " + e.getMessage());
        }
    }
}