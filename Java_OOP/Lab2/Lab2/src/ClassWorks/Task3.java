package ClassWorks;
import java.util.Scanner;
import java.util.Arrays;

public class Task3 {
    public static int[] replaceMaxMin(int[] arr) {
        if (arr == null || arr.length == 0) {
            return new int[]{}; // Возвращаем пустой массив, если входной массив пуст
        }

        int min = arr[0];
        int max = arr[0];
        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
                minIndex = i;
            }
            if (arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }
        int tmp = arr[minIndex];
        arr[minIndex] = arr[maxIndex];
        arr[maxIndex] = tmp;

        return arr;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] res = replaceMaxMin(arr);
        System.out.print(Arrays.toString(res));
    }
}
