package LabClassWorks.Task1;

public class MainTask1 {
    public static void main(String[] args) {
        Car[] cars = new Car[6];
        cars[0] = new Car("Mercedes", "E230", 240, 2.4);
        cars[1] = new Car("Toyota", "Corolla", 180, 1.8);
        cars[2] = new Car("BMW", "X5", 220, 3.0);
        cars[3] = new Car("Audi", "A4", 200, 1.6);
        cars[4] = new Car("Lexus", "RX350", 210, 3.5);
        cars[5] = new Car(); //пример использования дефолтного предопределенного конструктора класса

        for (Car car : cars) {
            car.ride();
            System.out.println(car.toString());
            System.out.println();
        }


    }
}