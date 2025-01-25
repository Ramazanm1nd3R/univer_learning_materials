package easy;
import java.util.Scanner;

public class EasyTask5 {
    public static int solve(int num) {
        String numStr = Integer.toString(num);
        int maxDigit = Integer.MIN_VALUE;

        for(char c : numStr.toCharArray()){
            int digit = Character.getNumericValue(c);

            if (digit > maxDigit){
                maxDigit = digit;
            }
        }
        return maxDigit;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        System.out.println(solve(number));
    }
}
