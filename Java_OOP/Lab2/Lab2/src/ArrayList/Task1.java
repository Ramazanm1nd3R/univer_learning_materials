package ArrayList;
import java.util.ArrayList;
import java.util.Arrays;

public class Task1 {
    public static void main(String[] args) {
        String[] Arrayy = {"PC", "Phone", "Banana"};
        ArrayList<String> ArrayyList = new ArrayList<>(Arrays.asList(Arrayy));
        System.out.println(ArrayyList);
    }
}