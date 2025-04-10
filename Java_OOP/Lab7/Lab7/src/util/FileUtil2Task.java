package util;

import model.BuyHistory;
import model.GoodItem;

import java.io.*;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;

public class FileUtil2Task {

    private static final String GOODS_FILE = "goodItems.txt";
    private static final String HISTORY_FILE = "buyHistory.txt";
    private static final SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");

    // ---------- Работа с GoodItem ----------

    public static ArrayList<GoodItem> getGoodItemList() {
        ArrayList<GoodItem> list = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(GOODS_FILE))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split(";");
                if (parts.length >= 2) {
                    String name = parts[0];
                    int price = Integer.parseInt(parts[1]);
                    list.add(new GoodItem(name, price));
                }
            }
        } catch (IOException e) {
            System.out.println("Error reading goods file: " + e.getMessage());
        }
        return list;
    }

    public static void saveGoodItems(ArrayList<GoodItem> items) {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(GOODS_FILE))) {
            for (GoodItem item : items) {
                bw.write(item.getName() + ";" + item.getPrice());
                bw.newLine();
            }
        } catch (IOException e) {
            System.out.println("Error writing goods file: " + e.getMessage());
        }
    }

    // ---------- Работа с BuyHistory ----------

    public static ArrayList<BuyHistory> getBuyHistory() {
        ArrayList<BuyHistory> history = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(HISTORY_FILE))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split(";");
                if (parts.length >= 3) {
                    String goodName = parts[0];
                    int price = Integer.parseInt(parts[1]);
                    Date date = sdf.parse(parts[2]);
                    history.add(new BuyHistory(goodName, price, date));
                }
            }
        } catch (Exception e) {
            System.out.println("Error reading history file: " + e.getMessage());
        }
        return history;
    }

    public static void saveBuyHistory(ArrayList<BuyHistory> history) {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(HISTORY_FILE))) {
            for (BuyHistory item : history) {
                bw.write(item.getGoodName() + ";" + item.getGoodPrice() + ";" + sdf.format(item.getBuyTime()));
                bw.newLine();
            }
        } catch (IOException e) {
            System.out.println("Error writing history file: " + e.getMessage());
        }
    }
}
