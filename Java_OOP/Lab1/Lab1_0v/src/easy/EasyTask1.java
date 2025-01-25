package easy;
import java.util.Scanner;

public class EasyTask1 {
    public static int solve(int[] nums) {
        int find_max = Integer.MIN_VALUE;

        for (int num : nums){
            if (num > find_max){
                find_max = num;
            }
        }
        return find_max;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter arr size: ");
        int size = sc.nextInt();

        int[] nums = new int[size];
        for (int i = 0; i < size; i++){
            nums[i] = sc.nextInt();
        }
        System.out.println(solve(nums));
    }
}
