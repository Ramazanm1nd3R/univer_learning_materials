package hard;

import java.util.Scanner;

public class HardTask4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int n = sc.nextInt();
        int sum = 0;
        int power = 1;
        String math_visual = "";

        for (int i = 0; i < n; i++) {
            int current_digit = (int) Math.pow(x, power);

            if (i % 2 == 0) {
                sum += current_digit;
                math_visual += (i == 0 ? "" : "+") + current_digit;
            }
            else {
                sum -= current_digit;
                math_visual += "+(" + (-current_digit) + ")";
            }

            power += 2;
        }

        System.out.println(sum + "(" + math_visual + ")");
    }
}
