package ArrayList;
import java.util.ArrayList;
import java.util.Collections;

public class Task4 {
    public static void main(String[] args) {
        ArrayList<String> colorList = new ArrayList<>();
        colorList.add("Red");
        colorList.add("Green");
        colorList.add("Blue");
        colorList.add("Yellow");
        int firstIndex = 1;
        int secondIndex = 3;
        Collections.swap(colorList, firstIndex, secondIndex);
        System.out.println(colorList);
    }
}
