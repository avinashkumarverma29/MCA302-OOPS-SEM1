#include <iostream>
using namespace std;

// Function template to exchange two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // 1. Demonstrating with Integers
    int num1 = 10, num2 = 20;
    cout << "--- Before Swapping Integers ---" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    swapValues(num1, num2);

    cout << "--- After Swapping Integers ---" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl << endl;

    // 2. Demonstrating with Characters
    char char1 = 'A', char2 = 'B';
    cout << "--- Before Swapping Characters ---" << endl;
    cout << "char1 = " << char1 << ", char2 = " << char2 << endl;

    swapValues(char1, char2);

    cout << "--- After Swapping Characters ---" << endl;
    cout << "char1 = " << char1 << ", char2 = " << char2 << endl;

    return 0;
}