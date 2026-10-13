#include <iostream>
using namespace std;

class Calculator {
public:
    int sum(int a, int b) {
        return a + b;
    }
    
    int sum(int a, int b, int c) {
        return a + b + c;
    }
    
    double sum(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of 2 integers (10, 20): " << calc.sum(10, 20) << endl;
    cout << "Sum of 3 integers (10, 20, 30): " << calc.sum(10, 20, 30) << endl;
    cout << "Sum of 2 decimals (10.5, 20.7): " << calc.sum(10.5, 20.7) << endl;
    
    return 0;
}