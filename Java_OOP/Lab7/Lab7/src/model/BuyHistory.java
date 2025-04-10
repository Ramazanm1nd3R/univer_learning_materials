package model;

import java.util.Date;

public class BuyHistory {
    private String goodName;
    private int goodPrice;
    private Date buyTime;

    public BuyHistory(String goodName, int goodPrice) {
        this.goodName = goodName;
        this.goodPrice = goodPrice;
        this.buyTime = new Date();
    }

    public String getGoodName() { return goodName; }
    public int getGoodPrice() { return goodPrice; }
    public Date getBuyTime() { return buyTime; }

    @Override
    public String toString() {
        return goodName + " " + goodPrice + " " + buyTime.getTime();
    }

    public static BuyHistory fromString(String line) {
        String[] parts = line.split(" ");
        return new BuyHistory(parts[0], Integer.parseInt(parts[1]), new Date(Long.parseLong(parts[2])));
    }

    // Доп. конструктор для парсинга
    public BuyHistory(String goodName, int goodPrice, Date buyTime) {
        this.goodName = goodName;
        this.goodPrice = goodPrice;
        this.buyTime = buyTime;
    }
}