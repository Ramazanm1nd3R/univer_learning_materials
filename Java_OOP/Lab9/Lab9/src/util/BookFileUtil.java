package util;

import model.Book;

import java.io.*;
import java.util.ArrayList;

public class BookFileUtil {
    private static final String FILE_NAME = "storage/booklist.txt";

    public static ArrayList<Book> readBooks() {
        ArrayList<Book> books = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(FILE_NAME))) {
            String line;
            while ((line = br.readLine()) != null) {
                books.add(Book.fromString(line));
            }
        } catch (IOException e) {
            System.out.println("⚠️ Could not read book list.");
        }
        return books;
    }

    public static void saveBooks(ArrayList<Book> books) {
        try {
            File storageDir = new File("storage");
            if (!storageDir.exists()) storageDir.mkdirs(); // создание директории

            try (BufferedWriter bw = new BufferedWriter(new FileWriter(FILE_NAME))) {
                for (Book book : books) {
                    bw.write(book.toString());
                    bw.newLine();
                }
            }
        } catch (IOException e) {
            System.out.println("⚠️ Could not save book list.");
        }
    }
}
