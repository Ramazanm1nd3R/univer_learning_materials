package labtasks.classwork.task1_users;

import labtasks.classwork.task1_users.users.*;
import java.util.ArrayList;

public class MainTask1 {
    public static void main(String[] args) {
        // список пользователей
        ArrayList<User> users = new ArrayList<>();

        // 5 объектов User
        User user1 = new User(11, "user1", "userpass1", "Paul", "Adams");
        User user2 = new User(12, "user2", "userpass2", "Sara", "Miller");
        User user3 = new User(13, "user3", "userpass3", "Tom", "Davis");
        User user4 = new User(14, "user4", "userpass4", "Anna", "Moore");
        User user5 = new User(15, "user5", "userpass5", "Chris", "Taylor");

        // 5 объектов Student и добавляем курсы
        Student student1 = new Student(1, "student1", "pass1", "John", "Doe", 3.9);
        student1.addCourse("Math"); student1.addCourse("Physics");
        Student student2 = new Student(2, "student2", "pass2", "Jane", "Smith", 3.8);
        student2.addCourse("Chemistry");
        Student student3 = new Student(3, "student3", "pass3", "Mike", "Johnson", 3.7);
        student3.addCourse("History");
        Student student4 = new Student(4, "student4", "pass4", "Emma", "Brown", 4.0);
        student4.addCourse("Art");
        Student student5 = new Student(5, "student5", "pass5", "Liam", "Wilson", 3.5);
        student5.addCourse("Biology");

        // 5 объектов Staff и добавляем предметы
        Staff staff1 = new Staff(6, "staff1", "staffpass1", "Alice", "Green", 55000);
        staff1.addSubject("Math"); staff1.addSubject("Science");
        Staff staff2 = new Staff(7, "staff2", "staffpass2", "Bob", "White", 50000);
        staff2.addSubject("History");
        Staff staff3 = new Staff(8, "staff3", "staffpass3", "Charlie", "Black", 60000);
        staff3.addSubject("Physics");
        Staff staff4 = new Staff(9, "staff4", "staffpass4", "David", "Clark", 53000);
        staff4.addSubject("Literature");
        Staff staff5 = new Staff(10, "staff5", "staffpass5", "Eve", "Brown", 52000);
        staff5.addSubject("Biology");

        // добавляем всех пользователей в общий список
        users.add(user1); users.add(user2); users.add(user3); users.add(user4); users.add(user5);
        users.add(student1); users.add(student2); users.add(student3); users.add(student4); users.add(student5);
        users.add(staff1); users.add(staff2); users.add(staff3); users.add(staff4); users.add(staff5);

        System.out.println("\n--- USERS LIST ---");
        for (User user : users) {
            System.out.println(user.getData());
            if (user instanceof Student student) {
                student.showCourses();
            } else if (user instanceof Staff staff) {
                staff.showSubjects();
            }
            System.out.println();
        }
    }
}
