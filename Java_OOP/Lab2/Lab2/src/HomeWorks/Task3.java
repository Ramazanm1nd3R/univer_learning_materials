package HomeWorks;
import java.util.Scanner;

public class Task3 {
    public static int getSecondBiggestElement(int[] arr) {
        int max = arr[0];
        int maxIndex = 0;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }

        int secondMax = Integer.MIN_VALUE;
        int secondMaxIndex = -1;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > secondMax && arr[i] < max && i != maxIndex) {
                secondMax = arr[i];
                secondMaxIndex = i;
            }
        }

        return secondMaxIndex;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if (n > 1) {
            int[] arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int secondMaxInd = getSecondBiggestElement(arr);

            if (secondMaxInd == -1) {
                System.out.println("второго нет, только тот, видимо там все элементы одного и того же типа))))");
            } else {
                System.out.println(arr[secondMaxInd] + " on index: " + secondMaxInd);
            }
        } else {
            System.out.println("колво элементов не подходит, давай хотя бы больше 2");
        }
    }
}
