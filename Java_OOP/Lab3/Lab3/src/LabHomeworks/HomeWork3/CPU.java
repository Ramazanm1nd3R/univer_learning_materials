package LabHomeworks.HomeWork3;

public class CPU {
    private String name;
    private int RAM;
    private double frequency;

    public CPU() {}

    public CPU(String name, int RAM, double frequency) {
        this.name = name;
        this.RAM = RAM;
        this.frequency = frequency;
    }

    public String getCPUData() {
        return "CPU Name: " + name + ", RAM: " + RAM + " MB, Frequency: " + frequency + " GHz";
    }

    public int getRAM() {
        return RAM;
    }

    public double getFrequency() {
        return frequency;
    }
}
