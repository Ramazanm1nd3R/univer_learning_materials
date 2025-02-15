package labtasks.homework.task2_search;
import labtasks.homework.task1_books.books.*;
import java.util.Scanner;

public class MainHomework2 {
    public static void main(String[] args) {
        Book[] books = new Book[10];

        // тестовые кейсы книг из предыдущего main класса

        books[0] = new ScientificBook("Physics", "S101", 320, 15000, "Oxford");
        books[1] = new ScientificBook("Chemistry", "S102", 280, 13000, "Cambridge");
        books[2] = new ScientificBook("Biology", "S103", 300, 14000, "Harvard");
        books[3] = new ScientificBook("Math", "S104", 400, 16000, "MIT");
        books[4] = new ScientificBook("Astronomy", "S105", 350, 17000, "NASA");


        books[5] = new LiteratureBook("To Kill a Mockingbird", "TK009", 281, "Harper Lee", 1960);
        books[6] = new LiteratureBook("War and Peace", "L201", 1225, "Tolstoy", 1869);
        books[7] = new LiteratureBook("The Great Gatsby", "L203", 218, "Fitzgerald", 1925);
        books[8] = new LiteratureBook("Moby Dick", "L204", 635, "Melville", 1851);
        books[9] = new LiteratureBook("1984", "N1984", 328, "George Orwell", 1949);

        Scanner sc = new Scanner(System.in);
        SearchMenu searcher = new SearchMenu(sc, books);
        searcher.itemSearch();
    }
}
