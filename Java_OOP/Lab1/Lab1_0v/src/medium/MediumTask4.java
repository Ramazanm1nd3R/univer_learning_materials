package medium;
import java.util.Scanner;

public class MediumTask4 {
    public static float solve(int n) {
        float c = 1, cSecond = 5, sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += (float) c / cSecond;
            c += 1;
            cSecond += 5;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(solve(n));
    }
}
