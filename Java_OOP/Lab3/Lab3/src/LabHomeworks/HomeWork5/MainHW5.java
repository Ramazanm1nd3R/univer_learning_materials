package LabHomeworks.HomeWork5;
import java.util.Scanner;

public class MainHW5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int groupCount = sc.nextInt();
        Group[] groups = new Group[groupCount];

        for (int i = 0; i < groupCount; i++) {
            String groupName = sc.next();
            int touristCount = sc.nextInt();
            Tourist[] tourists = new Tourist[touristCount];

            for (int j = 0; j < touristCount; j++) {
                String name = sc.next();
                int money = sc.nextInt();
                String access = sc.next();
                tourists[j] = new Tourist(name, money, access);
            }

            groups[i] = new Group(groupName, tourists);
        }

        for (Group group : groups) {
            System.out.println(group.getName() + " - " + group.canGoToExpedition());
        }
    }
}
