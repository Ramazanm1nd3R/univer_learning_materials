package classWork.task1;

public class FerrariEngine extends Engine{

    public FerrariEngine() {}

    public FerrariEngine(double engineVolume, int cylinderVolume, double engineWeight){
        super(engineVolume, cylinderVolume, engineWeight);
    }

    public double efficiency(){
        return 0.25;
    }

    public double throttleEnergy(){
        return engineVolume * cylinderAmount * 100;
    }

    public double breakEnergy(){
        return engineWeight * 2;
    }

}
