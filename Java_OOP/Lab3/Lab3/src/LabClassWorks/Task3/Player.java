package LabClassWorks.Task3;

public class Player {
    private String name;
    private String position;
    private int number;
    private boolean isInjured;

    public Player() {
    }

    public Player(String name, String position, int number, boolean isInjured) {
        this.name = name;
        this.position = position;
        this.number = number;
        this.isInjured = isInjured;
    }

    public String getPlayerData() {
        return "Number: " + number + ", Name: " + name + ", Position: " + position + ", Injured: " + (isInjured ? "Yes" : "No");
    }

    public boolean isInjured() {
        return isInjured;
    }

    public String getName() {
        return name;
    }

    public int getNumber() {
        return number;
    }

    public String getPosition() {
        return position;
    }
}
