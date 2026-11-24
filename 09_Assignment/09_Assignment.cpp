#include <iostream>
#include <string>
using namespace std;

// Base Class: Common details for all vehicles
class Vehicle {
protected:
    string vehicleNumber;
    string brand;

public:
    void setVehicleDetails(string vNum, string b) {
        vehicleNumber = vNum;
        brand = b;
    }

    void displayVehicleDetails() {
        cout << "Vehicle Number : " << vehicleNumber << endl;
        cout << "Brand          : " << brand << endl;
    }
};

// Derived Class 1: Car
class Car : public Vehicle {
private:
    int seatingCapacity;

public:
    void setCarDetails(string vNum, string b, int seats) {
        setVehicleDetails(vNum, b);
        seatingCapacity = seats;
    }

    void displayCarDetails() {
        cout << "--- Car Details ---" << endl;
        displayVehicleDetails();
        cout << "Seating Cap.   : " << seatingCapacity << " persons\n\n";
    }
};

// Derived Class 2: Truck
class Truck : public Vehicle {
private:
    double payloadCapacity; // in tons

public:
    void setTruckDetails(string vNum, string b, double load) {
        setVehicleDetails(vNum, b);
        payloadCapacity = load;
    }

    void displayTruckDetails() {
        cout << "--- Truck Details ---" << endl;
        displayVehicleDetails();
        cout << "Payload Cap.   : " << payloadCapacity << " tons\n";
    }
};

int main() {
    Car car1;
    car1.setCarDetails("MH-12-AB-1234", "Tata", 5);
    car1.displayCarDetails();

    Truck truck1;
    truck1.setTruckDetails("MH-14-XY-9876", "Ashok Leyland", 16.5);
    truck1.displayTruckDetails();

    return 0;
}
