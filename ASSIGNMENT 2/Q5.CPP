#include<iostream>
using namespace std;

class Student{
    string name;
    int rollNo;
    float cgpa;

public:

    // Default constructor
    Student(){
        name="Unknown";
        rollNo = 0;
        cgpa=0.0;
    }

    // Constructor with name and roll number
    Student(string n,int r){
        name=n;
        rollNo=r;
        cgpa = 0.0;
    }

    // Constructor with name, roll number, and CGPA
    Student(string n,int r,float c){
        name=n;
        rollNo = r;
        cgpa=c;
    }

    // Function to display details
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<< rollNo<< endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<endl;
    }
};

int main(){

    // Object using default constructor
    Student s1;

    // Object using name and roll number constructor
    Student s2("Avinash",101);

    // Object using name, roll number and CGPA constructor
    Student s3("Rahul",102,8.5);

    cout<<"Student 1:"<< endl;
    s1.display();

    cout<<"Student 2:"<<endl;
    s2.display();

    cout<<"Student 3:"<<endl;
    s3.display();

    return 0;
}