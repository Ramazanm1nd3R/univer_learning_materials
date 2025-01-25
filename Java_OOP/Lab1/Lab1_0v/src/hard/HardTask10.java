package hard;
import java.util.Scanner;

public class HardTask10 {

    public static int solve(int n, int[][] residents) {
        int maxAge = -1;
        int maxIndex = -1;

        for (int i = 0; i < n; i++) {
            int age = residents[i][0];
            int gender = residents[i][1];

            if (gender == 1 && age > maxAge) {
                maxAge = age;
                maxIndex = i + 1;
            }
        }

        return maxIndex;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] residents = new int[n][2];

        for (int i = 0; i < n; i++) {
            residents[i][0] = sc.nextInt();
            residents[i][1] = sc.nextInt();
        }

        int result = solve(n, residents);
        System.out.println(result == -1 ? "-1" : result);
    }
}
