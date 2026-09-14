#include<iostream>
using namespace std;

class Employee{
    string name;
    int id;
    float salary;

public:
    
    Employee(string n,int i,float s){
        name=n;
        id = i;
        salary=s;
    }

   
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<< id<< endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Employee e("Avinash",101,50000);

    e.display();

    return 0;
}