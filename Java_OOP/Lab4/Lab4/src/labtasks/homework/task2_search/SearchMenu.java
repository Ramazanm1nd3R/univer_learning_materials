package labtasks.homework.task2_search;
import labtasks.homework.task1_books.books.Book;

import java.util.Scanner;

public class SearchMenu {
    private Scanner input;
    private Book[] books;

    public SearchMenu(Scanner input, Book[] books) {
        this.input = input;
        this.books = books;
    }

    public void itemSearch() {
        while (true) {
            System.out.println("\nPRESS [1] TO SEARCH BOOK BY NAME");
            System.out.println("PRESS [2] TO SEARCH BOOK BY CODE");
            System.out.println("PRESS [3] TO SEARCH BOOK BY PAGES AMOUNT");
            System.out.println("PRESS [0] EXIT");

            int choice = input.nextInt();
            input.nextLine(); // ОЧИЩАЕМ буфер

            if (choice == 1) searchByName();
            else if (choice == 2) searchByCode();
            else if (choice == 3) searchByPagesRange();
            else if (choice == 0) break;
            else System.out.println("Invalid choice, try again.");
        }
    }


    public void searchByName() {
        System.out.print("INSERT NAME OF THE BOOK: ");
        String searchName = input.nextLine().trim();


        boolean found = false;
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null && books[i].getName().equalsIgnoreCase(searchName)) {
                System.out.println(books[i].getBookData());
                found = true;
            }
        }
        if (!found) {
            System.out.println("Book not found");
        }
    }

    public void searchByCode() {
        System.out.print("INSERT CODE OF THE BOOK: ");
        String searchCode = input.nextLine().trim();

        boolean found = false;
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null && books[i].getCode().equalsIgnoreCase(searchCode)){
                System.out.println(books[i].getBookData());
                found = true;
            }
        }
        if (!found) {
            System.out.println("Book not found");
        }
    }

    public void searchByPagesRange() {
        System.out.println("INSERT MINIMUM PAGES OF THE BOOK: ");
        String minInput = input.nextLine().trim();
        if (!minInput.matches("\\d+")) {
            System.out.println("Not a number. Please enter a valid number.");
            return;
        }
        Integer minPages = Integer.parseInt(minInput);

        System.out.println("INSERT MAXIMUM PAGES OF THE BOOK: ");
        String maxInput = input.nextLine().trim();
        if (!maxInput.matches("\\d+")) {
            System.out.println("Not a number. Please enter a valid number.");
            return;
        }
        Integer maxPages = Integer.parseInt(maxInput);

        if (minPages < 0 || maxPages < 0 || minPages > maxPages) {
            System.out.println("Invalid range, try again.");
            return;
        }

        boolean found = false;
        for (Book book : books) {
            if (book != null && book.getPages() >= minPages && book.getPages() <= maxPages) {
                System.out.println(book.getBookData());
                found = true;
            }
        }
        if (!found) {
            System.out.println("No books found in the specified range.");
        }
    }
}
