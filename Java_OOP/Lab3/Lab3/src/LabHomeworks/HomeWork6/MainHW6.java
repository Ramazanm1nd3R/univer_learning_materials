package LabHomeworks.HomeWork6;
import java.util.Arrays;
import java.util.Scanner;

public class MainHW6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();
        if (n < 2 || n > 10) {
            System.out.println("должно быть между 2 и 10, не включительно");
            return;
        }

        Oscar[] nominees = new Oscar[n];

        for (int i = 0; i < n; i++) {
            String name = sc.next();
            String surname = sc.next();
            int movies = sc.nextInt();
            double rating = sc.nextDouble();
            nominees[i] = new Oscar(name, surname, movies, rating);
        }

        Arrays.sort(nominees, (o1, o2) -> {
            if (Double.compare(o2.getRating(), o1.getRating()) == 0) {
                return Integer.compare(o2.getMovies(), o1.getMovies());
            } else {
                return Double.compare(o2.getRating(), o1.getRating());
            }
        });

        for (Oscar nominee : nominees) {
            System.out.println(nominee);
        }
    }
}
