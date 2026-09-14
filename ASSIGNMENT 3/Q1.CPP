#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float marks;

public:
    
    Student(string n,float m){
        name=n;
        marks = m;
    }

    
    friend void displayDetails(Student s);
};


void displayDetails(Student s){
    cout<<"Name: "<<s.name<<endl;
    cout<<"Marks: "<< s.marks<<endl;
}

int main(){
    Student s("Akshat", 92.5);

    displayDetails(s);

    return 0;
}