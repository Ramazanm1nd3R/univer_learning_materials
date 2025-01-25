package easy;

public class EasyTask4 {
    public static void main(String[] args) {
        int [] arr = {1, -2, 0};
        int positiveCount = 0, negativeCount = 0, zeroCount = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > 0) {
                positiveCount++;
            }
            if (arr[i] < 0) {
                negativeCount++;
            }
            if (arr[i] == 0) {
                zeroCount++;
            }
        }
        System.out.println(positiveCount + " " + negativeCount + " " + zeroCount);
    }
}
