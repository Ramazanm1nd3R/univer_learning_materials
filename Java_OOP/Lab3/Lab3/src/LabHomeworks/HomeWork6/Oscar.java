package LabHomeworks.HomeWork6;

public class Oscar {
    private String name;
    private String surname;
    private int movies;
    private double rating;

    public Oscar(String name, String surname, int movies, double rating) {
        this.name = name;
        this.surname = surname;
        this.movies = movies;
        this.rating = rating;
    }

    public String getName() {
        return name;
    }

    public String getSurname() {
        return surname;
    }

    public int getMovies() {
        return movies;
    }

    public double getRating() {
        return rating;
    }

    @Override
    public String toString() {
        return name + " " + surname + " " + movies + " " + rating;
    }
}
