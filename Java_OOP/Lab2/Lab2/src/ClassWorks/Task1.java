package ClassWorks;
import java.util.Scanner;

public class Task1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the n: ");

        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.print("enter " + n + " elements: ");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                System.out.print(arr[i] + " ");
            }
        }
    }
}
