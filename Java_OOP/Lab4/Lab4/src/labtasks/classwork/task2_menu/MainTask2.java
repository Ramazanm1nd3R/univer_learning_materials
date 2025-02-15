package labtasks.classwork.task2_menu;
import labtasks.classwork.task1_users.users.*;
import java.util.ArrayList;
import java.util.Scanner;

public class MainTask2 {
    public static void main(String[] args) {
        ArrayList<User> users = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        MenuTask2 menu = new MenuTask2(users, scanner);
        menu.startMenu();
    }
}