#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;

public:
    void acceptVehicle() {
        cout << "Enter Brand: ";
        cin >> ws;
        getline(cin, brand);
        cout << "Enter Model: ";
        getline(cin, model);
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;

public:
    void acceptCar() {
        acceptVehicle();
        cout << "Enter Number of Doors: ";
        cin >> doors;
    }

    void displayCar() {
        cout << "\n--- Car Details ---" << endl;
        displayVehicle();
        cout << "Number of Doors: " << doors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;

public:
    void acceptBike() {
        acceptVehicle();
        cout << "Enter Engine Capacity (cc): ";
        cin >> engineCapacity;
    }

    void displayBike() {
        cout << "\n--- Bike Details ---" << endl;
        displayVehicle();
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    cout << "Enter details for the Car:\n";
    c.acceptCar();

    cout << "\nEnter details for the Bike:\n";
    b.acceptBike();

    c.displayCar();
    b.displayBike();

    return 0;
}