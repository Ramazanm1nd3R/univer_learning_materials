package Employers;

public class Developer extends Employee implements iOutSourcable {
    private int KPI; // пример 10, 20 проц

    public Developer(String name, int age, int workHours, int salaryPerHour, int KPI) {
        super(name, age, workHours, salaryPerHour);
        this.KPI = KPI;
    }

    public int getKPI() {
        return KPI;
    }

    public void setKPI(int KPI) {
        this.KPI = KPI;
    }

    @Override
    public int calculateCost() {
        return (40 - workHours) * 100;
    }

    @Override
    public double calculateSalary() {
        return super.calculateSalary() * (1 + KPI / 100.0);
    }

    @Override
    public String toString() {
        return "Name: " + name + ", Age: " + age +
                ", Total Salary: " + calculateSalary();
    }
}
