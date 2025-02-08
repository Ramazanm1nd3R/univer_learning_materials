package LabHomeworks.HomeWork4;

public class Laptop {
    private String name;
    private int price;
    private int generationOfCPU; // 8, 9, 10
    private String ssd; // YES or NO

    public Laptop(String name, int price, int generationOfCPU, String ssd) {
        this.name = name;
        this.price = price;
        this.generationOfCPU = generationOfCPU;
        this.ssd = ssd;
    }

    // метод для пересчета цены с учетом характеристик
    public int calculateNewPrice() {
        double newPrice = price;

        // Увеличение цены в зависимости от поколения процессора
        switch (generationOfCPU) {
            case 8:
                newPrice += price * 0.10; // +10%
                break;
            case 9:
                newPrice += price * 0.15; // +15%
                break;
            case 10:
                newPrice += price * 0.20; // +20%
                break;
        }

        // увеличение цены если SSD присутствует
        if (ssd.equalsIgnoreCase("YES")) {
            newPrice += price * 0.15; // +15%
        }

        return (int) newPrice; // конвертируем в целое число
    }

    // Геттер для имени
    public String getName() {
        return name;
    }
}
