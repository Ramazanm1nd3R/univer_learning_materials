package LabHomeworks.HomeWork5;

public class Tourist {
    private String name;
    private int money;
    private String access;

    public Tourist(String name, int money, String access) {
        this.name = name;
        this.money = money;
        this.access = access;
    }

    public int getMoney() {
        return money;
    }

    public String getAccess() {
        return access;
    }

}
