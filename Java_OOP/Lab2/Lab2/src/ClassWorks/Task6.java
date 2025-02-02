package ClassWorks;

import java.util.Scanner;

public class Task6 {
    public static double getAverageGeometric(int[] arr) {
        int count = 0;
        double product = 1.0;

        for (int num : arr) {
            if (num != 0) {
                product *= Math.abs(num);
                count++;
            }
        }

        if (count == 0) {
            return 0.0;
        }

        return Math.pow(product, 1.0 / count);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.printf("%.5f%n", getAverageGeometric(arr));
    }
}
