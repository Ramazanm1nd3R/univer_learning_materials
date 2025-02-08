package LabHomeworks.HomeWork4;
import java.util.Scanner;

public class MainHW4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        Laptop[] laptops = new Laptop[n];

        for (int i = 0; i < n; i++) {
            String name = sc.next();
            int price = sc.nextInt();
            int generation = sc.nextInt();
            String ssd = sc.next();
            laptops[i] = new Laptop(name, price, generation, ssd);
        }

        // Вывод новых цен
        for (Laptop laptop : laptops) {
            System.out.println(laptop.getName() + " " + laptop.calculateNewPrice());
        }
    }
}
