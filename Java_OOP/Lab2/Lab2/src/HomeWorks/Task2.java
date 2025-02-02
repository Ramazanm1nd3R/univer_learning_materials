package HomeWorks;
import java.util.Scanner;

public class Task2 {
    public static int getElementPosition(int[] arr, int digit) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == digit) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int m = sc.nextInt();
        int position = getElementPosition(arr, m);
        if (position == -1) {
            System.out.println("No");
        } else {
            System.out.println("Yes, on index: " + position);
        }
    }
}
