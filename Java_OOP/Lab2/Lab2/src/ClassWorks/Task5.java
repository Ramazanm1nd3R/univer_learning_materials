package ClassWorks;
import java.util.Scanner;

public class Task5 {
    public static int getProduct(int[] arr){
        int product = 1;

        for(int i=0; i<arr.length; i++){
            if(arr[i] != 0){
                product *= arr[i];
            }

        }
        return product;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print(getProduct(arr));
    }
}
