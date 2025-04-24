package model;

import java.io.Serializable;

public class Book implements Serializable {
    private int id;
    private String name;
    private String author;

    public Book() {}

    public Book(int id, String name, String author) {
        this.id = id;
        this.name = name;
        this.author = author;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    @Override
    public String toString() {
        return id + ";" + name + ";" + author;
    }

    public static Book fromString(String line) {
        String[] parts = line.split(";");
        return new Book(Integer.parseInt(parts[0]), parts[1], parts[2]);
    }
}
