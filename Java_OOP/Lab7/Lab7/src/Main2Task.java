import admin.AdminApp;
import client.ClientApp;

import java.util.Scanner;

public class Main2Task {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("""
                PRESS [1] ADMIN PANEL
                PRESS [2] CLIENT PANEL""");

        int choice = scanner.nextInt();
        if (choice == 1) {
            AdminApp.run();
        } else if (choice == 2) {
            ClientApp.run();
        }
    }
}
