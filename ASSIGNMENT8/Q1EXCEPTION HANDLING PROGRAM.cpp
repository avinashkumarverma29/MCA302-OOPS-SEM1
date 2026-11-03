#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    double num, den, result;
    cout << "Enter numerator and denominator: ";
    cin >> num >> den;

    try {
        if (den == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        result = num / den;
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}