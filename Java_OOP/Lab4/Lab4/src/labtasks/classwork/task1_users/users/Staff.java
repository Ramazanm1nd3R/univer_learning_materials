package labtasks.classwork.task1_users.users;

public class Staff extends User {
    private Double salary;
    private String[] subjects = new String[100];
    private int indexOfSubject = 0;

    public Staff() {}

    public Staff(int id, String login, String password, String name, String surname, double salary) {
        super(id, login, password, name, surname);
        this.salary = salary;
    }

    // Геттеры и сеттеры
    public Double getSalary() {
        return salary;
    }

    public void setSalary(Double salary) {
        this.salary = salary;
    }

    public void addSubject(String subject) {
        if (indexOfSubject < subjects.length) {
            subjects[indexOfSubject] = subject;
            indexOfSubject++;
        } else {
            System.out.println("Array is full");
        }
    }

    public void showSubjects() {
        System.out.println("Subjects:");
        for (int i = 0; i < indexOfSubject; i++) {
            System.out.println(subjects[i]);
        }
    }


    public String getData() {
        return super.getData() + ", Salary: " + salary + ", Subjects: " + indexOfSubject;
    }
}