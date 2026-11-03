#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer between 0 and 100: ";
    cin >> num;

    try {
        if (num < 0) {
            throw -1; // Throwing int to represent negative number error
        }
        if (num > 100) {
            throw 'e'; // Throwing char to represent out-of-bounds error
        }
        cout << "Valid number entered: " << num << endl;
    } catch (int e) {
        cout << "Error: Number cannot be negative." << endl;
    } catch (char e) {
        cout << "Error: Number cannot be greater than 100." << endl;
    }
    return 0;
}