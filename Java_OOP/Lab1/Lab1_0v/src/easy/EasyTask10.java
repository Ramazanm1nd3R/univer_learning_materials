package easy;
import java.util.Scanner;

public class EasyTask10 {
    public static Boolean solve(int n) {

        while (n > 0) {
            if (n % 10 == 9){
                return true;
            }
            n /= 10;
        }
        return false;

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
