#include<iostream>
using namespace std;

class Employee{
    float salary;

public:
    // Constructor to initialize salary
    Employee(float s){
        salary=s;
    }

    // Friend function declaration
    friend void compareSalary(Employee e1,Employee e2);
};

// Friend function definition
void compareSalary(Employee e1,Employee e2){
    if(e1.salary>e2.salary){
        cout<<"Higher salary: "<< e1.salary<<endl;
    }
    else{
        cout<<"Higher salary: "<<e2.salary<< endl;
    }
}

int main(){
    Employee emp1(45000);
    Employee emp2(60000);

    compareSalary(emp1,emp2);

    return 0;
}