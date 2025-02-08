package LabHomeworks.HomeWork2;
import LabHomeworks.HomeWork1.Student;

public class MainHW2 {
    public static void main(String[] args) {
        Student[] students = {
                new Student(1, "Ilyas", "Zhuanyshev", 4.0),
                new Student(2, "Aruzhan", "Alzhanova", 3.7),
                new Student(3, "Dias", "Kairatov", 3.9),
                new Student(4, "Bekbolat", "Nursultanov", 3.5),
                new Student(5, "Alina", "Kenesova", 3.8),
                new Student(6, "Tamerlan", "Alimov", 3.4),
                new Student(7, "Aidar", "Yesenov", 3.2),
                new Student(8, "Diana", "Muratova", 3.6),
                new Student(9, "Aliya", "Serikova", 3.3),
                new Student(10, "Kanat", "Mukhtarov", 3.9)
        };

        // Bubble sort для сортировки по ГПА
        for (int i = 0; i < students.length - 1; i++) {
            for (int j = 0; j < students.length - i - 1; j++) {
                if (students[j].getGpa() < students[j + 1].getGpa()) {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }

        for (Student student : students) {
            System.out.println(student.getData());
        }
    }
}