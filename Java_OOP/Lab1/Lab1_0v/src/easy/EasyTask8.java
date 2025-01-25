package easy;
import java.util.Scanner;

public class EasyTask8 {

    public static Boolean solve(int n){
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum >= 10 && sum <= 99;
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
