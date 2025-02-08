package LabHomeworks.HomeWork3;

public class MainHW3 {
    public static void main(String[] args) {
        // создание обьектов CPU
        CPU cpu1 = new CPU("Intel i5", 8192, 3.1);
        CPU cpu2 = new CPU("AMD Ryzen 5", 4096, 2.2);
        CPU cpu3 = new CPU("Intel i7", 16384, 3.8);

        // создание обьектов Laptop
        Laptop laptop1 = new Laptop("Dell", 512, cpu1);
        Laptop laptop2 = new Laptop("HP", 256, cpu2);
        Laptop laptop3 = new Laptop("MacBook", 1024, cpu3);

        // выполняем проверку запуска
        laptop1.printLaptopData();
        laptop1.execute();
        System.out.println();

        laptop2.printLaptopData();
        laptop2.execute();
        System.out.println();

        laptop3.printLaptopData();
        laptop3.execute();
    }
}
