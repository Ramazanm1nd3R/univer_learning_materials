package client;

import model.BuyHistory;
import model.GoodItem;
import util.FileUtil2Task;

import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;

public class ClientApp {

    public static void run() {
        Scanner scanner = new Scanner(System.in);
        ArrayList<GoodItem> goods = FileUtil2Task.getGoodItemList();
        ArrayList<BuyHistory> history = FileUtil2Task.getBuyHistory();

        while (true) {
            System.out.println("""
                    PRESS [1] LIST GOODS
                    PRESS [2] BUY GOOD
                    PRESS [3] LIST BUY HISTORY
                    PRESS [0] TO EXIT""");

            int choice = scanner.nextInt();

            if (choice == 1) {
                for (int i = 0; i < goods.size(); i++) {
                    System.out.println(i + ": " + goods.get(i));
                }
            } else if (choice == 2) {
                System.out.print("Enter index to buy: ");
                int index = scanner.nextInt();
                if (index >= 0 && index < goods.size()) {
                    GoodItem item = goods.get(index);
                    history.add(new BuyHistory(item.getName(), item.getPrice(), new Date()));
                    FileUtil2Task.saveBuyHistory(history);
                    System.out.println("Purchased: " + item.getName());
                }
            } else if (choice == 3) {
                for (BuyHistory bh : history) {
                    System.out.println(bh);
                }
            } else if (choice == 0) {
                break;
            }
        }
    }
}
