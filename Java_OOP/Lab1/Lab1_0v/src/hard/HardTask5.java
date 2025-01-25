package hard;
import java.util.Scanner;

public class HardTask5 {

    public static String solve(int num) {
        String numStr = Integer.toString(num);
        int mid = numStr.length() / 2;

        String leftPart = numStr.substring(0, mid);

        String rightPart = new StringBuilder(numStr.substring(numStr.length() - mid)).reverse().toString();

        if (leftPart.equals(rightPart)) {
            return "Yes";
        } else {
            return "No";
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(solve(num));
    }
}