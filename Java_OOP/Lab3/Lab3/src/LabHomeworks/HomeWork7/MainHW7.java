package LabHomeworks.HomeWork7;

public class MainHW7 {
    public static void main(String[] args) {

        Drug[] kzPharmaDrugs = {
                new Drug("Adderall", 2000, "YES"),
                new Drug("Clonazepam", 3200, "NO"),
                new Drug("Lexapro", 950, "YES")
        };
        Drug[] evalarDrugs = {
                new Drug("Xanax", 5600, "NO"),
                new Drug("Pantoprazole", 1800, "YES")
        };

        Pharmacy[] almatyPharmacies = {
                new Pharmacy("KZPharma", kzPharmaDrugs),
                new Pharmacy("Evalar", evalarDrugs)
        };

        City almaty = new City("ALMATY", almatyPharmacies);

        Drug[] euroPharmaDrugs = {
                new Drug("Gabapentin", 7400, "NO"),
                new Drug("Cymbalta", 1600, "YES"),
                new Drug("Tramadol", 450, "YES"),
                new Drug("Azithromycin", 780, "NO")
        };
        Drug[] healthDrugs = {
                new Drug("Ritalin", 1200, "YES"),
                new Drug("Methadone", 9800, "YES")
        };

        Pharmacy[] astanaPharmacies = {
                new Pharmacy("EuroPharma", euroPharmaDrugs),
                new Pharmacy("Health", healthDrugs)
        };

        City astana = new City("ASTANA", astanaPharmacies);

        // Вывод результатов для ALMATY
        System.out.println("City: " + almaty.getName());
        for (Pharmacy pharmacy : almaty.getPharmacies()) {
            Drug expensiveDrug = pharmacy.getMostExpensiveDrug();
            System.out.println("The most expensive drug in " + pharmacy.getName() + " is " + expensiveDrug.getName());
        }
        System.out.println("THE MOST EXPENSIVE DRUG IN ALMATY: " + almaty.getMostExpensiveDrugOfTheCity().getName());

        // Вывод результатов для ASTANA
        System.out.println("\nCity: " + astana.getName());
        for (Pharmacy pharmacy : astana.getPharmacies()) {
            Drug expensiveDrug = pharmacy.getMostExpensiveDrug();
            System.out.println("The most expensive drug in " + pharmacy.getName() + " is " + expensiveDrug.getName());
        }
        System.out.println("THE MOST EXPENSIVE DRUG IN ASTANA: " + astana.getMostExpensiveDrugOfTheCity().getName());
    }
}
