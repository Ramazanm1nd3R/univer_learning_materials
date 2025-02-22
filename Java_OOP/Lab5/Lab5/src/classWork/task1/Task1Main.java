package classWork.task1;

public class Task1Main {
    public static void main(String[] args) {
        Engine[] engines = new Engine[10];

        // FerrariEngine
        engines[0] = new FerrariEngine(3.9, 8, 250);
        engines[1] = new FerrariEngine(4.0, 10, 270);
        engines[2] = new FerrariEngine(3.5, 6, 230);
        engines[3] = new FerrariEngine(4.2, 12, 280);
        engines[4] = new FerrariEngine(3.0, 6, 220);

        // RenaultEngine
        engines[5] = new RenaultEngine(2.5, 4, 200, 50);
        engines[6] = new RenaultEngine(3.0, 6, 220, 70);
        engines[7] = new RenaultEngine(2.8, 4, 210, 60);
        engines[8] = new RenaultEngine(3.2, 8, 250, 80);
        engines[9] = new RenaultEngine(2.0, 4, 180, 40);

        System.out.println("Максимальные скорости двигателей:");
        for (Engine engine : engines) {
            System.out.println(engine.getClass().getSimpleName() + " - Max Speed: " + engine.getMaxSpeed());
        }
    }
}
