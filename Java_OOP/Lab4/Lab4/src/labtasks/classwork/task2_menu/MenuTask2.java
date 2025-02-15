package labtasks.classwork.task2_menu;

import labtasks.classwork.task1_users.users.*;
import java.util.ArrayList;
import java.util.Scanner;

public class MenuTask2 {
    private ArrayList<User> users;
    private Scanner scanner;

    public MenuTask2(ArrayList<User> users, Scanner scanner) {
        this.users = users;
        this.scanner = scanner;
    }

    public void startMenu() {
        while (true) {
            System.out.println("\nPRESS [1] ADD USER");
            System.out.println("PRESS [2] LIST USERS");
            System.out.println("PRESS [0] EXIT");
            int choice = scanner.nextInt();
            scanner.nextLine();

            if (choice == 1) addUser();
            else if (choice == 2) listUsers();
            else if (choice == 0) break;
            else System.out.println("Invalid choice. Try again.");
        }
    }

    private void addUser() {
        System.out.println("\nPRESS [1] TO ADD STUDENT");
        System.out.println("PRESS [2] TO ADD STAFF");
        int choice = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Enter ID: ");
        int id = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Enter login: ");
        String login = scanner.nextLine();
        System.out.print("Enter password: ");
        String password = scanner.nextLine();
        System.out.print("Enter name: ");
        String name = scanner.nextLine();
        System.out.print("Enter surname: ");
        String surname = scanner.nextLine();

        if (choice == 1) {
            System.out.print("Enter GPA: ");
            double gpa = scanner.nextDouble();
            scanner.nextLine();
            Student student = new Student(id, login, password, name, surname, gpa);

            System.out.println("Add courses (type 'done' to finish):");
            while (true) {
                System.out.print("Enter course: ");
                String course = scanner.nextLine();
                if (course.equalsIgnoreCase("done")) break;
                student.addCourse(course);
            }
            users.add(student);
        } else if (choice == 2) {
            System.out.print("Enter salary: ");
            double salary = scanner.nextDouble();
            scanner.nextLine();
            Staff staff = new Staff(id, login, password, name, surname, salary);

            System.out.println("Add subjects (type 'done' to finish):");
            while (true) {
                System.out.print("Enter subject: ");
                String subject = scanner.nextLine();
                if (subject.equalsIgnoreCase("done")) break;
                staff.addSubject(subject);
            }
            users.add(staff);
        } else {
            System.out.println("Invalid user type.");
        }
    }

    private void listUsers() {
        System.out.println("\nPRESS [1] TO LIST STUDENTS");
        System.out.println("PRESS [2] TO LIST STAFF");
        int choice = scanner.nextInt();
        scanner.nextLine();

        for (User user : users) {
            if ((choice == 1 && user instanceof Student) || (choice == 2 && user instanceof Staff)) {
                System.out.println(user.getData());
                if (user instanceof Student student) {
                    student.showCourses();
                } else if (user instanceof Staff staff) {
                    staff.showSubjects();
                }
            }
        }
    }
}
