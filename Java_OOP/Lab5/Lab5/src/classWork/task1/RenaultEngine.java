package classWork.task1;

public class RenaultEngine extends Engine {
    double extraTurboEnergy;

    public RenaultEngine() {}

    public RenaultEngine(double engineVolume, int cylinderAmount, double engineWeight, double extraTurboEnergy) {
        super(engineVolume, cylinderAmount, engineWeight);
        this.extraTurboEnergy = extraTurboEnergy;
    }

    @Override
    public double efficiency() {
        return 0.27;
    }

    @Override
    public double throttleEnergy() {
        return engineVolume * cylinderAmount * 110 + extraTurboEnergy;
    }

    @Override
    public double breakEnergy() {
        return engineWeight * 2.1;
    }

    public double getExtraTurboEnergy() {
        return extraTurboEnergy;
    }

    public void setExtraTurboEnergy(double extraTurboEnergy) {
        this.extraTurboEnergy = extraTurboEnergy;
    }
}
