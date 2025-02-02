package HomeWorks;

import java.util.Arrays;
import java.util.Scanner;

public class Task4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[][] arr = new int[N][3];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        arr = sortedByTime(arr);

        for (int i = 0; i < N; i++) {
            System.out.printf("%02d:%02d:%02d\n", arr[i][0], arr[i][1], arr[i][2]);
        }
    }

    public static int[][] sortedByTime(int[][] arr) {
        Arrays.sort(arr, (a, b) -> {
            if (a[0] != b[0]) {
                return a[0] - b[0]; //  по часам
            } else if (a[1] != b[1]) {
                return a[1] - b[1]; //  по минутам
            } else {
                return a[2] - b[2]; // по секундам
            }
        });
        return arr;
    }
}
