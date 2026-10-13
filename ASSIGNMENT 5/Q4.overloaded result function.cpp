#include <iostream>
using namespace std;

class Student {
public:
    // Display marks in one subject
    void result(double marks) {
        cout << "Marks in Subject: " << marks << endl;
    }
    
    // Average of two subjects
    void result(double m1, double m2) {
        cout << "Average of 2 Subjects: " << (m1 + m2) / 2.0 << endl;
    }
    
    // Average of three subjects
    void result(double m1, double m2, double m3) {
        cout << "Average of 3 Subjects: " << (m1 + m2 + m3) / 3.0 << endl;
    }
};

int main() {
    Student s;
    s.result(85.0);
    s.result(85.0, 90.0);
    s.result(85.0, 90.0, 95.5);
    
    return 0;
}