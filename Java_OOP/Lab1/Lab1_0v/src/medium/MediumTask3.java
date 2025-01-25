package medium;
import java.util.Scanner;

public class MediumTask3 {

    public static float solve(int n) {
        float sum = 0.0f;

        for (int i = 1; i <= n; i++) {
            sum += i / (float) ((i-1)*2+1);

        }

        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(solve(n));
    }
}
