import model.User;
import util.FileUtil1Task;

import java.util.ArrayList;
import java.util.Scanner;

public class Main1Task {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<User> users = FileUtil1Task.getUsersList();

        while (true) {
            System.out.println("""
                    PRESS [1] TO ADD USERS
                    PRESS [2] TO LIST USERS
                    PRESS [3] TO DELETE USERS
                    PRESS [4] TO EXIT""");

            String choice = in.nextLine();

            switch (choice) {
                case "1" -> {
                    System.out.print("Enter id: ");
                    int id = Integer.parseInt(in.nextLine());

                    System.out.print("Enter login: ");
                    String login = in.nextLine();

                    System.out.print("Enter password: ");
                    String password = in.nextLine();

                    users.add(new User(id, login, password));
                    FileUtil1Task.saveUsersList(users);
                    System.out.println("User added!");
                }

                case "2" -> {
                    if (users.isEmpty()) {
                        System.out.println("No users found.");
                    } else {
                        for (User user : users) {
                            System.out.println(user);
                        }
                    }
                }

                case "3" -> {
                    System.out.print("Enter id to delete: ");
                    int id = Integer.parseInt(in.nextLine());
                    users.removeIf(u -> u.getId() == id);
                    FileUtil1Task.saveUsersList(users);
                    System.out.println("User deleted (if existed).");
                }

                case "4" -> {
                    System.out.println("Exiting...");
                    return;
                }

                default -> System.out.println("Invalid option.");
            }
        }
    }
}
