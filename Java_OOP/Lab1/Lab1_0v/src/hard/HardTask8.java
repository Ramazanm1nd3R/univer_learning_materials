package hard;
import java.util.Scanner;

public class HardTask8 {

    public static int solve(int n) {
        int sum = 0;

        for (int i = (n % 2 == 0 ? 2 : 1); i <= n; i += 2) {
            sum += doubleFactorial(i);
        }

        return sum;
    }

    private static int doubleFactorial(int k) {
        int result = 1;

        for (int i = k; i > 0; i -= 2) {
            result *= i;
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(solve(n));
    }
}
