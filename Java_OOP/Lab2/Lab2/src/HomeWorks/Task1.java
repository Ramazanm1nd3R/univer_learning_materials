package HomeWorks;
import java.util.ArrayList;
import java.util.Scanner;

public class Task1 {
    public static int getSumBetweenTwoZero(int[] arr){
        ArrayList<Integer> zeroIndexes = new ArrayList<>();

        for(int i=0; i<arr.length; i++){
            if(arr[i]==0){
                zeroIndexes.add(i);
            }
        }

        if (zeroIndexes.size() < 2){
            return -1;
        }

        int fistZeroIndex = zeroIndexes.get(0);
        int lastZeroIndex = zeroIndexes.get(zeroIndexes.size()-1);

        int sum = 0;

        for (int i = fistZeroIndex + 1; i < lastZeroIndex; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(getSumBetweenTwoZero(arr));
    }
}
