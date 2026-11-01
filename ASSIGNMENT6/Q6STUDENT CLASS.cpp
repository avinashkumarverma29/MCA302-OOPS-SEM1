#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float CGPA;

public:
    Student(string n = "", float c = 0.0) : name(n), CGPA(c) {}

    // Overloading == operator
    bool operator==(const Student& obj) {
        return this->CGPA == obj.CGPA;
    }

    // Overloading > operator
    bool operator>(const Student& obj) {
        return this->CGPA > obj.CGPA;
    }

    void displayDetails() const {
        cout << "Student: " << name << " | CGPA: " << CGPA << endl;
    }
    
    string getName() const {
        return name;
    }
};

int main() {
    Student s1("Student A", 8.5);
    Student s2("Student B", 9.2);

    s1.displayDetails();
    s2.displayDetails();
    cout << "-----------------------" << endl;

    if (s1 == s2) {
        cout << "Both students have the exact same CGPA." << endl;
    } else if (s1 > s2) {
        cout << s1.getName() << " has a higher CGPA than " << s2.getName() << "." << endl;
    } else {
        cout << s2.getName() << " has a higher CGPA than " << s1.getName() << "." << endl;
    }

    return 0;
}