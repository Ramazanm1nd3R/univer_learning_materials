package Company;
import Employers.iOutSourcable;

public class Company implements iOutSourcable {
    private String name;
    private int projects;

    public Company(String name, int projects) {
        this.name = name;
        this.projects = projects;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getProjects() {
        return projects;
    }

    public void setProjects(int projects) {
        this.projects = projects;
    }

    @Override
    public int calculateCost() {
        return (projects * 1000);
    }

    @Override
    public String toString() {
        return "Company: " + name + ", Projects: " + projects + ", Outsourcing Cost: " + calculateCost();
    }
}
