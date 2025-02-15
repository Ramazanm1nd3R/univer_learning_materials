package labtasks.classwork.task1_users.users;

public class Student extends User {
    private double gpa;
    private String[] courses = new String[100];
    private int indexOfCourses = 0;

    public Student() {}

    public Student(int id, String login, String password, String name, String surname, double gpa) {
        super(id, login, password, name, surname);
        this.gpa = gpa;
    }

    // геттеры и сеттеры
    public double getGpa() {
        return gpa;
    }

    public void setGpa(double gpa) {
        this.gpa = gpa;
    }


    public void addCourse(String course) {
        if (indexOfCourses < courses.length) {
            courses[indexOfCourses] = course;
            indexOfCourses++;
        } else {
            System.out.println("Array is full");
        }
    }

    public void showCourses() {
        System.out.println("Courses: ");
        for (int i = 0; i < indexOfCourses; i++) {
            System.out.println(courses[i]);
        }
    }

    public String getData() {
        return super.getData() + ", GPA: " + gpa + ", Courses: " + indexOfCourses;
    }
}