package task2;

public class Car extends Thread {
    private String name;
    private int speed; // in m/s
    private int distance = 0;
    private int seconds = 0;

    public static int finishLine = 1000;
    public static int placeCounter = 1;

    private static final Object lock = new Object(); // для синхронизации места
    private static StringBuilder results = new StringBuilder();

    public Car(String name, int speed) {
        this.name = name;
        this.speed = speed;
    }

    @Override
    public void run() {
        while (distance < finishLine) {
            distance += speed;
            seconds++;
            System.out.println(name + " is in " + distance + " meters");
            try {
                Thread.sleep(1000); // каждую секунду обновляется
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        synchronized (lock) {
            results.append("Place ").append(placeCounter++)
                    .append(": ").append(name)
                    .append(" - ").append(seconds).append(" seconds\n");
        }
    }

    public static void printResults() {
        System.out.println("\n🏁 Final Classification 🏁\n" + results);
    }
}
