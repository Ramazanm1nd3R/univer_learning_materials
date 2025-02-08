package LabHomeworks.HomeWork7;

public class Pharmacy {
    private String name;
    private Drug[] drugs;

    public Pharmacy(String name, Drug[] drugs) {
        this.name = name;
        this.drugs = drugs;
    }

    public String getName() {
        return name;
    }

    public Drug getMostExpensiveDrug() {
        Drug expensiveDrug = drugs[0];
        for (Drug drug : drugs) {
            if (drug.getPrice() > expensiveDrug.getPrice()) {
                expensiveDrug = drug;
            }
        }
        return expensiveDrug;
    }
}
