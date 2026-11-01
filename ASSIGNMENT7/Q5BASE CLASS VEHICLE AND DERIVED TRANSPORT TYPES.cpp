#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "Generic Vehicle" << endl;
    }
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void displayInfo() override {
        cout << "This is a Car. It typically has 4 wheels." << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayInfo() override {
        cout << "This is a Bike. It typically has 2 wheels." << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayInfo() override {
        cout << "This is a Bus. It is used for public transport." << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();
    Vehicle* v3 = new Bus();
    
    v1->displayInfo();
    v2->displayInfo();
    v3->displayInfo();
    
    delete v1;
    delete v2;
    delete v3;
    
    return 0;
}