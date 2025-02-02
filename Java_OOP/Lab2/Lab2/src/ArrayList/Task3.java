package ArrayList;
import java.util.ArrayList;
import java.util.Scanner;

public class Task3 {
    public static void main(String[] args) {
        ArrayList<Integer> numberList = new ArrayList<>();
        numberList.add(10);
        numberList.add(20);
        numberList.add(30);
        numberList.add(40);
        numberList.add(50);
        Scanner inputScanner = new Scanner(System.in);
        int searchNumber = inputScanner.nextInt();
        if (numberList.contains(searchNumber)) {
            System.out.println(numberList.indexOf(searchNumber));
        } else {
            System.out.println("Not found");
        }
    }
}
