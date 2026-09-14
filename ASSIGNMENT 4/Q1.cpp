#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void acceptPersonDetails() {
        cout << "Enter Name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;

public:
    void acceptStudentDetails() {
        acceptPersonDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Course: ";
        cin >> ws;
        getline(cin, course);
    }

    void displayStudentDetails() {
        cout << "\n--- Student Details ---" << endl;
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s;
    
    cout << "Enter details for the student:\n";
    s.acceptStudentDetails();

    s.displayStudentDetails();

    return 0;
}