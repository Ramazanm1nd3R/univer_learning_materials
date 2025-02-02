package ArrayList;
import java.util.ArrayList;
public class Task2 {
    public static void main(String[] args) {
        ArrayList<String> animalList = new ArrayList<>();
        animalList.add("Dog");
        animalList.add("Cat");
        animalList.add("Horse");
        String[] animalArray = new String[animalList.size()];
        animalArray = animalList.toArray(animalArray);
        for (String animal : animalArray) {
            System.out.print(animal + " ");
        }
    }
}
