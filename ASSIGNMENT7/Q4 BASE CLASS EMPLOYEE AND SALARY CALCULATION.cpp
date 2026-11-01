#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double sal) : name(n), basicSalary(sal) {}
    virtual void calculateSalary() {
        cout << "Salary of " << name << ": " << basicSalary << endl;
    }
    virtual ~Employee() {}
};

class PermanentEmployee : public Employee {
    double bonus;
public:
    PermanentEmployee(string n, double sal, double b) : Employee(n, sal), bonus(b) {}
    void calculateSalary() override {
        cout << "Total Salary of Permanent Employee " << name << ": " << basicSalary + bonus << endl;
    }
};

class ContractEmployee : public Employee {
    int hoursWorked;
    double hourlyRate;
public:
    ContractEmployee(string n, double sal, int hours, double rate) : Employee(n, sal), hoursWorked(hours), hourlyRate(rate) {}
    void calculateSalary() override {
        cout << "Total Salary of Contract Employee " << name << ": " << basicSalary + (hoursWorked * hourlyRate) << endl;
    }
};

int main() {
    Employee* e1 = new PermanentEmployee("Alice", 50000, 10000);
    Employee* e2 = new ContractEmployee("Bob", 20000, 50, 200);
    
    e1->calculateSalary();
    e2->calculateSalary();
    
    delete e1;
    delete e2;
    
    return 0;
}