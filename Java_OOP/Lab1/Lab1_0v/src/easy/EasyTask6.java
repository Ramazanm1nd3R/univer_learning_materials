package easy;
import java.util.Scanner;

public class EasyTask6 {
    public static int solve(int n) {
        String numStr = Integer.toString(n);
        char[] numChars = numStr.toCharArray();
        char tmpNum = numChars[1];
        numChars[1] = numChars[2];
        numChars[2] = tmpNum;

        return Integer.parseInt(new String(numChars));
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        System.out.println(solve(number));
    }
}
