package easy;
import java.util.Scanner;

public class EasyTask7 {
    public static float solve(float nums) {
        if (nums >= 10000){
            return nums - nums * 0.1f;
        }
        else if (nums >= 5000){
            return nums - nums * 0.05f;
        }
        else {
            return nums;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float price = sc.nextInt();

        System.out.println((int) solve(price));
    }
}
