package ClassWorks;
import java.util.Scanner;

public class Task2 {
    public static String getMinMax(int[] arr){
        if (arr == null || arr.length == 0){
            return "arr is empty";
        }

        int min = arr[0];
        int max = arr[0];
        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
                minIndex = i;
            }
            if (arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }
        return "Min: " + min + " (Index: " + minIndex + "), Max: " + max + " (Index: " + maxIndex + ")";
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print("enter the " + n + "th number: ");
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(getMinMax(arr));
    }

}
