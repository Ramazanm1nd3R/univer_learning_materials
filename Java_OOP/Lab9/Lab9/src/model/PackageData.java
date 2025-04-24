package model;

import java.io.Serializable;
import java.util.ArrayList;

public class PackageData implements Serializable {
    private String operationType;
    private Book book;
    private ArrayList<Book> books;

    public PackageData() {}

    public PackageData(String operationType, Book book, ArrayList<Book> books) {
        this.operationType = operationType;
        this.book = book;
        this.books = books;
    }

    public String getOperationType() { return operationType; }
    public void setOperationType(String operationType) { this.operationType = operationType; }

    public Book getBook() { return book; }
    public void setBook(Book book) { this.book = book; }

    public ArrayList<Book> getBooks() { return books; }
    public void setBooks(ArrayList<Book> books) { this.books = books; }
}
