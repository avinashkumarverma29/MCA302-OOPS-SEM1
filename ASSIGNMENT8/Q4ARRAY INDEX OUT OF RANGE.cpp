#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index;

    cout << "Enter index to access (0 to " << size - 1 << "): ";
    cin >> index;

    try {
        if (index < 0 || index >= size) {
            throw out_of_range("Error: Array index is outside the valid range.");
        }
        cout << "Element at index " << index << " is: " << arr[index] << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}