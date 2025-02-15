package labtasks.homework.task1_books;

import labtasks.homework.task1_books.books.*;

public class MainHomework1 {
    public static void main(String[] args) {
        Library library = new Library("National Library", "Astana", "Kazakhstan");

        // ScientificBook
        library.addBook(new ScientificBook("Physics", "S101", 320, 15000, "Oxford"));
        library.addBook(new ScientificBook("Chemistry", "S102", 280, 13000, "Cambridge"));
        library.addBook(new ScientificBook("Biology", "S103", 300, 14000, "Harvard"));
        library.addBook(new ScientificBook("Math", "S104", 400, 16000, "MIT"));
        library.addBook(new ScientificBook("Astronomy", "S105", 350, 17000, "NASA"));

        // LiteratureBook
        library.addBook(new LiteratureBook("War and Peace", "L201", 1225, "Tolstoy", 1869));
        library.addBook(new LiteratureBook("1984", "L202", 328, "Orwell", 1949));
        library.addBook(new LiteratureBook("The Great Gatsby", "L203", 218, "Fitzgerald", 1925));
        library.addBook(new LiteratureBook("Moby Dick", "L204", 635, "Melville", 1851));
        library.addBook(new LiteratureBook("Pride and Prejudice", "L205", 279, "Austen", 1813));

        // Вывод книг
        library.printLibraryData();
    }
}
