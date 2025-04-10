package admin;

import model.GoodItem;
import util.FileUtil2Task;

import java.util.ArrayList;
import java.util.Scanner;

public class AdminApp {

    public static void run() {
        Scanner scanner = new Scanner(System.in);
        ArrayList<GoodItem> goods = FileUtil2Task.getGoodItemList();

        while (true) {
            System.out.println("""
                    PRESS [1] ADD GOOD
                    PRESS [2] LIST GOODS
                    PRESS [3] DELETE GOOD
                    PRESS [0] TO EXIT""");

            int choice = scanner.nextInt();
            scanner.nextLine();

            if (choice == 1) {
                System.out.print("Enter name: ");
                String name = scanner.nextLine();
                System.out.print("Enter price: ");
                int price = scanner.nextInt();
                goods.add(new GoodItem(name, price));
                FileUtil2Task.saveGoodItems(goods);
            } else if (choice == 2) {
                for (GoodItem item : goods) {
                    System.out.println(item);
                }
            } else if (choice == 3) {
                System.out.print("Enter index to delete: ");
                int index = scanner.nextInt();
                if (index >= 0 && index < goods.size()) {
                    goods.remove(index);
                    FileUtil2Task.saveGoodItems(goods);
                }
            } else if (choice == 0) {
                break;
            }
        }
    }
}
