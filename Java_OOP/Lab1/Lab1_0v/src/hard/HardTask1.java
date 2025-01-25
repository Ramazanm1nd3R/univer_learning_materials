package hard;

import java.util.Scanner;

public class HardTask1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        for (int i = a; i <= b; i++) {

            int devidebleCount = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    devidebleCount++;
                }
            }
            if (devidebleCount == 2){
                System.out.print(i + " ");
            }
        }
    }
}
