#include <iostream>
#include <stdexcept>
using namespace std;

class Student {
private:
    int marks[5];

public:
    void acceptMarks() {
        cout << "Enter marks for 5 subjects (0-100): " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            
            if (marks[i] < 0 || marks[i] > 100) {
                throw out_of_range("Error: Mark is outside the valid range of 0-100.");
            }
        }
    }

    void displayAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        cout << "Average Marks: " << (float)sum / 5.0 << endl;
    }
};

int main() {
    Student s;
    try {
        s.acceptMarks();
        // displayAverage is only reached if no exceptions were thrown above
        s.displayAverage(); 
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}