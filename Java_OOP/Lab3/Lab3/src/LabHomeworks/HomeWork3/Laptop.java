package LabHomeworks.HomeWork3;

public class Laptop {
    private String name;
    private int HDDMemory;
    private CPU processor;

    public Laptop() {}

    public Laptop(String name, int HDDMemory, CPU processor) {
        this.name = name;
        this.HDDMemory = HDDMemory;
        this.processor = processor;
    }

    public void printLaptopData() {
        System.out.println("Laptop Name: " + name + ", HDD Memory: " + HDDMemory + " GB");
        System.out.println(processor.getCPUData());
    }

    public void execute() {
        if (processor.getRAM() > 4096 && processor.getFrequency() > 2.5) {
            System.out.println("Laptop is started and executing");
        } else {
            System.out.println("Cannot start computer");
        }
    }
}
