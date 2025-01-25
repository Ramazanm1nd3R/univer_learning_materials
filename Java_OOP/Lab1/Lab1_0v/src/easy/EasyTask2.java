package easy;

public class EasyTask2 {
    public static void main(String[] args) {
        int n = 123;
        String numStr = Integer.toString(n);
        char[] numChars = numStr.toCharArray();
        char tmpNum = numChars[1];
        numChars[1] = numChars[0];
        numChars[0] = tmpNum;

        System.out.println(Integer.parseInt(new String(numChars)));
    }
}
