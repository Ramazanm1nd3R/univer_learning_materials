package LabHomeworks.HomeWork7;

public class City {
    private String name;
    private Pharmacy[] pharmacies;

    public City(String name, Pharmacy[] pharmacies) {
        this.name = name;
        this.pharmacies = pharmacies;
    }

    public String getName() {
        return name;
    }

    public Pharmacy[] getPharmacies() {
        return pharmacies;
    }

    public Drug getMostExpensiveDrugOfTheCity() {
        Drug expensiveDrug = pharmacies[0].getMostExpensiveDrug();
        for (Pharmacy pharmacy : pharmacies) {
            Drug pharmacyDrug = pharmacy.getMostExpensiveDrug();
            if (pharmacyDrug.getPrice() > expensiveDrug.getPrice()) {
                expensiveDrug = pharmacyDrug;
            }
        }
        return expensiveDrug;
    }
}
