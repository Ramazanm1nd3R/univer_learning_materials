package classWork.task2;

import java.util.Arrays;
import java.util.Comparator;

public class Task2Main {
    public static void main(String[] args) {
        Workers[] employees = new Workers[15];

        employees[0] = new Staff(1, "John", "Doe", 5000);
        employees[1] = new Staff(2, "Alice", "Smith", 5500);
        employees[2] = new Staff(3, "Bob", "Johnson", 4800);
        employees[3] = new Staff(4, "Charlie", "Brown", 5300);
        employees[4] = new Staff(5, "David", "White", 5100);

        employees[5] = new HRManagers(6, "Emma Wilson", 6000);
        employees[6] = new HRManagers(7, "Oliver Thompson", 6200);
        employees[7] = new HRManagers(8, "Sophia Martinez", 6100);
        employees[8] = new HRManagers(9, "Liam Harris", 5900);
        employees[9] = new HRManagers(10, "Ava Robinson", 6050);

        employees[10] = new Programmers(11, "devX", 7000, 500, 0.8);
        employees[11] = new Programmers(12, "codeMaster", 6800, 600, 0.9);
        employees[12] = new Programmers(13, "debugKing", 7500, 400, 0.7);
        employees[13] = new Programmers(14, "bugHunter", 7100, 450, 0.85);
        employees[14] = new Programmers(15, "scriptNinja", 6900, 550, 0.95);

        System.out.println("Список работников:");
        for (Workers worker : employees) {
            System.out.println(worker.getWorkerData() + " | Salary: " + worker.getSalary());
        }

        Workers maxSalary = employees[0];
        for (Workers worker : employees) {
            if (worker.getSalary() > maxSalary.getSalary()) {
                maxSalary = worker;
            }
        }
        System.out.println("\nРаботник с самой высокой зарплатой:");
        System.out.println(maxSalary.getWorkerData() + ", Salary: " + maxSalary.getSalary());

        Arrays.sort(employees, Comparator.comparingInt(Workers::getSalary).reversed());

        System.out.println("\nРаботники, отсортированные по убыванию зарплаты:");
        for (Workers worker : employees) {
            System.out.println(worker.getWorkerData() + " | Salary: " + worker.getSalary());
        }


    }
}
