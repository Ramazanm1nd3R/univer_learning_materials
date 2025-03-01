import Employers.*;
import Company.*;

public class Main {
    public static void main(String[] args) {
        // Manager
        Manager manager1 = new Manager("Yersultan Usenkhan", 45, 40, 50, 500);
        Manager manager2 = new Manager("Aziza Kuanysh", 38, 35, 55, 600);

        // Developer
        Developer dev1 = new Developer("Ramazan Ospan", 30, 38, 60, 20);
        Developer dev2 = new Developer("Rowni Chel", 27, 40, 65, 35);

        // массив сотрудников
        Employee[] employees = { manager1, manager2, dev1, dev2 };

        // Вывод всех сотрудников
        System.out.println("All Employees:");
        for (Employee emp : employees) {
            System.out.println(emp);
        }

        // Нахождение самого молодого сотрудника
        Employee youngest = employees[0];
        for (Employee emp : employees) {
            if (emp.getAge() < youngest.getAge()) {
                youngest = emp;
            }
        }
        System.out.println("\nYoungest Employee: " + youngest.getName() + ", Age: " + youngest.getAge());

        // Среднее количество рабочих часов
        double totalHours = 0;
        for (Employee emp : employees) {
            totalHours += emp.getWorkHours();
        }
        double avgHours = totalHours / employees.length;
        System.out.println("\nAverage Work Hours: " + avgHours);

        // бубле сорт
        for (int i = 0; i < employees.length - 1; i++) {
            for (int j = 0; j < employees.length - i - 1; j++) {
                if (employees[j].calculateSalary() < employees[j + 1].calculateSalary()) {

                    Employee temp = employees[j];
                    employees[j] = employees[j + 1];
                    employees[j + 1] = temp;
                }
            }
        }
        System.out.println("\nEmployees Sorted by Salary:");

        for (Employee emp : employees) {
            System.out.println(emp);
        }

        // Создаем компанию
        Company company1 = new Company("IITU", 5);

        // Вычисление общих аутсорсинговых расходав
        int totalOutsourceCost = company1.calculateCost();
        for (Employee emp : employees) {
            if (emp instanceof Developer) {
                totalOutsourceCost += ((Developer) emp).calculateCost();
            }
        }

        System.out.println("\nTotal Outsourcing Cost: " + totalOutsourceCost + " KZT");
    }
}
