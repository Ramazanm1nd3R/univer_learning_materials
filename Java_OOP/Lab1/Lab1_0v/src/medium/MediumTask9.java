package medium;

import java.util.Scanner;

public class MediumTask9 {

    public static int solve(int n) {
        int sum = 0;
        int term = 0;

        for (int i = 1; i <= n; i++) {
            term = term * 10 + 8;
            sum += term;
        }

        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(solve(n));
    }
}
