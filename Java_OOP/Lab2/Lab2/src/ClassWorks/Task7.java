package ClassWorks;

import java.util.Scanner;

public class Task7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter n: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("enter " + n + " digits:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter m: ");
        int m = sc.nextInt();

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > m) {
                count++;
            }
        }

        System.out.println(count);
    }
}
