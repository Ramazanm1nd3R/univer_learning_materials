package model;

public class GoodItem {
    private String name;
    private int price;

    public GoodItem() {}

    public GoodItem(String name, int price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    @Override
    public String toString() {
        return name + " " + price;
    }

    public static GoodItem fromString(String line) {
        String[] parts = line.split(" ");
        return new GoodItem(parts[0], Integer.parseInt(parts[1]));
    }
}
