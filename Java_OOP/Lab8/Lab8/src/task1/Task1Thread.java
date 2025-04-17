package task1;

public class Task1Thread extends Thread {
    private int delay; // задержка в миллисекундах

    public Task1Thread(int delay) {
        this.delay = delay;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                System.out.println(getName() + " → " + i);
                Thread.sleep(delay); // задержка
            }
        } catch (InterruptedException e) {
            System.out.println(getName() + " was interrupted.");
        }
    }
}
