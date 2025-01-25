package medium;
import java.util.Scanner;

public class MediumTask8 {

    public static int solve(int n) {
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += (i * (i + 1)) / 2;
        }

        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(solve(n));
    }
}
