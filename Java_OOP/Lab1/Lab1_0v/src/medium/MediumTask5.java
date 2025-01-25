package medium;
import java.util.Scanner;

public class MediumTask5 {
    public static String solve(int [] arr) {
        int elementCounter = 0;
        float sum = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                break;
            }
            sum += arr[i];
            elementCounter++;

        }

        float average = sum / elementCounter;
        return "el count: " + elementCounter + ", avg: " + String.format("%.2f", average);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();

        int [] arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(solve(arr));
    }
}
