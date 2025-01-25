package easy;
import java.util.Scanner;

public class EasyTask9 {
    public static Boolean solve(int n) {
        int sum = 1;

        while (n > 0) {
            sum *= n % 10;
            n /= 10;
        }

        return sum >= 100 && sum <= 999;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if (solve(n)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
