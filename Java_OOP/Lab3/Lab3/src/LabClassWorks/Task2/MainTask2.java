package LabClassWorks.Task2;
import LabClassWorks.Task1.Car;

public class MainTask2 {
    public static void main(String[] args) {
        // Создаём массив из 10 объектов Car
        Car[] cars = new Car[10];
        cars[0] = new Car("Mercedes", "E230", 240, 2.4);
        cars[1] = new Car("Toyota", "Corolla", 180, 1.8);
        cars[2] = new Car("BMW", "X5", 220, 3.0);
        cars[3] = new Car("Audi", "A4", 200, 1.6);
        cars[4] = new Car("Lexus", "RX350", 210, 3.5);
        cars[5] = new Car("Honda", "Civic", 190, 2.0);
        cars[6] = new Car("Ford", "Mustang", 250, 5.0);
        cars[7] = new Car("Chevrolet", "Camaro", 240, 3.6);
        cars[8] = new Car("Nissan", "GT-R", 310, 3.8);
        cars[9] = new Car("Porsche", "911", 300, 3.0);

        // Ищем машину с максимальной скоростью
        Car fastestCar = cars[0];
        for (Car car : cars) {
            if (car.getMaxSpeed() > fastestCar.getMaxSpeed()) {
                fastestCar = car;
            }
        }

        // Вывод данных о машине с максимальной скоростью
        System.out.println(fastestCar.toString());
    }
}
