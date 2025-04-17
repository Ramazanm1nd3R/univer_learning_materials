package task1;

import java.util.ArrayList;

public class MainTask1 {
    public static void main(String[] args) {
        ArrayList<Task1Thread> threads = new ArrayList<>();

        for (int i = 0; i < 10; i++) {
            // создаём потоки с задержкой от 100 до 1000 мс
            Task1Thread thread = new Task1Thread(100 + i * 100);
            thread.setName("Thread-" + (i + 1)); // задаём имя потоку
            threads.add(thread);
        }

        // Запуск всех потоков
        for (Task1Thread thread : threads) {
            thread.start();
        }
    }
}
