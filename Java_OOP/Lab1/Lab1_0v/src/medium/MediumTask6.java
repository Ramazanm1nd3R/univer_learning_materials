package medium;
import java.util.Scanner;

public class MediumTask6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int price = sc.nextInt();
        float weight = 0.1f;

        for (int i = 1; i <= 10; i++) {
            float cost = weight * price;
            System.out.printf("%.1f kg is %.0f tg%n", weight, cost);
            weight += 0.1f;
        }
    }
}
