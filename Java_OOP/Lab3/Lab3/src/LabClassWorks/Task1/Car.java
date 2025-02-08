package LabClassWorks.Task1;

public class Car {
    private String name;
    private String model;
    private int maxSpeed;
    private double engineVolume;

    public Car() {
    }

    public Car(String name, String model, int maxSpeed, double engineVolume) {
        this.name = name;
        this.model = model;
        this.maxSpeed = maxSpeed;
        this.engineVolume = engineVolume;
    }

    // геттер для maxSpeed (во второй задачке понадобиться)
    public int getMaxSpeed() {
        return maxSpeed;
    }

    @Override
    public String toString() {
        return "Car: " + name + " " + model + ", " + maxSpeed + "km/h, " + engineVolume + " liters";
    }

    public void ride() {
        if (engineVolume > 2.2) {
            System.out.println("Car is riding");
        } else {
            System.out.println("Couldn’t start engine");
        }
    }
}
