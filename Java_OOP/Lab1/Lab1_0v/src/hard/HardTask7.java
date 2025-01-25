package hard;
import java.util.Scanner;

public class HardTask7 {
    public static int solve(int num) {
        int lastDigit = num % 10;

        while (num >= 10) {
            num /= 10;
        }
        int firstDigit = num;

        return firstDigit + lastDigit;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(solve(num));
    }
}
