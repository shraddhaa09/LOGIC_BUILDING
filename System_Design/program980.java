// Factory Pattern
// Factory is responsible for creating the required Vehicle object.

enum VehicleType {
    BIKE,
    CAR,
    TRUCK
}

// Abstract base class for all vehicles
abstract class Vehicle {
    private String number;

    public Vehicle(String number) {
        this.number = number;
    }

    public String getNumber() {
        return this.number;
    }

    // Each vehicle must provide its own display implementation
    public abstract void display();
}

// Concrete Vehicle class
class Bike extends Vehicle {
    public Bike(String number) {
        super(number);
    }

    public void display() {
        System.out.println("Bike : " + getNumber());
    }
}

// Concrete Vehicle class
class Car extends Vehicle {
    public Car(String number) {
        super(number);
    }

    public void display() {
        System.out.println("Car : " + getNumber());
    }
}

// Concrete Vehicle class
class Truck extends Vehicle {
    public Truck(String number) {
        super(number);
    }

    public void display() {
        System.out.println("Truck : " + getNumber());
    }
}

// Factory class responsible for creating Vehicle objects
class VehicleFactory {

    public static Vehicle createVehicle(VehicleType type, String number) {

        // Factory decides which object needs to be created
        switch (type) {
            case BIKE:
                return new Bike(number);

            case CAR:
                return new Car(number);

            case TRUCK:
                return new Truck(number);

            default:
                throw new IllegalArgumentException("Invalid Vehicle Type");
        }
    }
}

class program980 {
    public static void main(String A[]) {

        // Objects are created using the Factory
        Vehicle v1 = VehicleFactory.createVehicle(
            VehicleType.BIKE, "MH12VL9080"
        );

        Vehicle v2 = VehicleFactory.createVehicle(
            VehicleType.CAR, "MH12WZ9080"
        );

        Vehicle v3 = VehicleFactory.createVehicle(
            VehicleType.TRUCK, "MH12ML9080"
        );

        // Runtime polymorphism
        v1.display();
        v2.display();
        v3.display();
    }
}
