#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw invalid_argument("Error: Age cannot be negative.");
        }
        cout << "Valid age entered: " << age << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}