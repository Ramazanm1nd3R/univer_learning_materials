package labtasks.homework.task1_books.books;

public class Book {
    protected String name;
    protected String code;
    protected int pages;

    public Book(){}

    public Book(String name, String code, int pages) {
        this.name = name;
        this.code = code;
        this.pages = pages;
    }

    public String getBookData() {
        return "book name: " + name + ", code: " + code + ", pages: " + pages;
    }
}
