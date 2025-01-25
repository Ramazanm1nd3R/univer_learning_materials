package hard;
import java.util.Scanner;

public class HardTask3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int decimal = sc.nextInt();

        String resultString = "";
        int number = decimal;

        while (number > 0) {
            int rem = number % 2;
            resultString = rem + resultString;
            number /= 2;
        }

        System.out.println("num: " + decimal + " to: " + resultString);
    }
}