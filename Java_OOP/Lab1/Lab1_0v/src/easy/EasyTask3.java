package easy;
import java.util.Scanner;

public class EasyTask3 {
    public static String solve(int x, int y) {
        if (x > 0 && y > 0) {
            return "1 quarter";
        }
        if (x < 0 && y > 0) {
            return "4 quarter";
        }
        if (x < 0 && y < 0) {
            return "3 quarter";
        }
        if (x > 0 && y < 0) {
            return "2 quarter";
        }
        return "Point is on an axis";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.println(solve(x, y));
    }
}
