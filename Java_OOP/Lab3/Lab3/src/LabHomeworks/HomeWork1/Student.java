package LabHomeworks.HomeWork1;

public class Student {
    private int id;
    private String name;
    private String surname;
    private double gpa;

    public Student() {
    }

    public Student(int id, String name, String surname, double gpa) {
        this.id = id;
        this.name = name;
        this.surname = surname;
        this.gpa = gpa;
    }

    // геттер для извлечения ГПА для следующего задания
    public double getGpa() {
        return gpa;
    }

    public String getData() {
        return "ID: " + id + ", Student: " + name + " " + surname + ", GPA: " + gpa;
    }
}