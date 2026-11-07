#include <iostream>
using namespace std;

// Class template for Calculator
template <typename T>
class Calculator {
private:
    T num1;
    T num2;

public:
    // Constructor to initialize the values
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    // Function for Addition
    T add() {
        return num1 + num2;
    }

    // Function for Subtraction
    T subtract() {
        return num1 - num2;
    }

    // Function for Multiplication
    T multiply() {
        return num1 * num2;
    }

    // Function for Division
    T divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero! ";
            return 0;
        }
        return num1 / num2;
    }

    // Function to display results
    void display() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        if (num2 != 0) {
            cout << "Division: " << divide() << endl;
        } else {
            divide(); // Triggers the division by zero error message
            cout << endl;
        }
    }
};

int main() {
    // 1. Testing with Floating-point numbers
    cout << "--- Calculator with Floats ---" << endl;
    Calculator<float> floatCalc(15.5, 4.5);
    floatCalc.display();

    cout << endl;

    // 2. Testing with Integers
    cout << "--- Calculator with Integers ---" << endl;
    Calculator<int> intCalc(20, 5);
    intCalc.display();

    return 0;
}