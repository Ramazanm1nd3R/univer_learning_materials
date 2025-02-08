package LabHomeworks.HomeWork1;

public class MainHW1 {
    public static void main(String[] args) {
        Student[] students = {
                new Student(1, "Ilyas", "Zhuanyshev", 4.0),
                new Student(2, "Aruzhan", "Alzhanova", 3.7),
                new Student(3, "Dias", "Kairatov", 3.9),
                new Student(4, "Bekbolat", "Nursultanov", 3.5),
                new Student(5, "Alina", "Kenesova", 3.8)
        };

        for (Student student : students) {
            System.out.println(student.getData());
        }
    }
}