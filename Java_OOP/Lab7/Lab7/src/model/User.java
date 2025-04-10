package model;

public class User {
    private int id;
    private String login;
    private String password;

    public User() {}

    public User(int id, String login, String password) {
        this.id = id;
        this.login = login;
        this.password = password;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    @Override
    public String toString() {
        return id + " " + login + " " + password;
    }

    public static User fromString(String line) {
        String[] parts = line.split(" ");
        return new User(Integer.parseInt(parts[0]), parts[1], parts[2]);
    }
}
