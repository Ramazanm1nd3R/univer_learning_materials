package task2;

public class MainTask2 {
    public static void main(String[] args) {
        // Установка финишной линии
        Car.finishLine = 1000;

        // Создаём 10 машин
        Car[] cars = new Car[]{
                new Car("Ferrari", 100),
                new Car("Mercedes", 95),
                new Car("BMW", 90),
                new Car("Audi", 85),
                new Car("Renault", 80),
                new Car("Toyota", 75),
                new Car("Honda", 70),
                new Car("Lexus", 65),
                new Car("Mazda", 60),
                new Car("Nissan", 55)
        };

        // Запускаем гонку
        for (Car car : cars) {
            car.start();
        }

        // Ждём, пока все машины доедут
        for (Car car : cars) {
            try {
                car.join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        // Печатаем результаты
        Car.printResults();
    }
}
