class Vehicle {
    public void start() {
        System.out.println("Vehicle Starting ....!");
    }
}

class Car extends Vehicle {
    @Override
    public void start() {
        System.out.println("Car Starting ....!");
    }
}

public class OverrideMethod {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle();
        vehicle.start();
        Car car = new Car();
        car.start();
    }
}
