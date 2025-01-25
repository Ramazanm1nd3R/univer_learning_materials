package hard;
import java.util.Scanner;

public class HardTask6 {
    public static int solve(int num) {
        String numStr = Integer.toString(num);
        String result = "";

        for (int i = numStr.length() - 1; i >= 0; i--) {
            char tempChar = numStr.charAt(i);
            result += tempChar;
        }

        return Integer.parseInt(result);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(solve(num));
    }
}
