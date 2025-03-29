package com.example.javafx_lab6.Util;

public class Stopwatch {
    private long startTime;
    private long pausedTime;
    private boolean running;

    public void start() {
        startTime = System.currentTimeMillis();
        running = true;
    }

    public void pause() {
        if (running) {
            pausedTime = System.currentTimeMillis() - startTime;
            running = false;
        }
    }

    public void resume() {
        if (!running) {
            startTime = System.currentTimeMillis() - pausedTime;
            running = true;
        }
    }

    public void reset() {
        running = false;
        startTime = 0;
        pausedTime = 0;
    }

    public String getFormattedTime() {
        long elapsed = running ? System.currentTimeMillis() - startTime : pausedTime;
        long seconds = (elapsed / 1000) % 60;
        long minutes = (elapsed / 1000 / 60) % 60;
        long hours = (elapsed / 1000 / 60 / 60);
        return String.format("%02d:%02d:%02d", hours, minutes, seconds);
    }
}