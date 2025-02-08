package LabHomeworks.HomeWork7;

public class Drug {
    private String name;
    private int price;
    private String outOfDate;

    public Drug(String name, int price, String outOfDate) {
        this.name = name;
        this.price = price;
        this.outOfDate = outOfDate;
    }

    public String getName() {
        return name;
    }

    public int getPrice() {
        return price;
    }

    public String getOutOfDate() {
        return outOfDate;
    }
}
