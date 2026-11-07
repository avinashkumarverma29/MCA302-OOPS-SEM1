#include <iostream>
using namespace std;

// Class template for Array Operations
template <typename T, int size>
class ArrayOperations {
private:
    T arr[size];

public:
    // Function to input elements into the array
    void setElements() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to display the elements
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Function to find and return the largest element
    T findLargest() {
        T largest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        return largest;
    }
};

int main() {
    // 1. Testing with an Integer Array of size 5
    cout << "--- Integer Array Operations ---" << endl;
    ArrayOperations<int, 5> intArray;
    intArray.setElements();
    intArray.display();
    cout << "Largest element: " << intArray.findLargest() << endl << endl;

    // 2. Testing with a Floating-Point Array of size 4
    cout << "--- Float Array Operations ---" << endl;
    ArrayOperations<float, 4> floatArray;
    floatArray.setElements();
    floatArray.display();
    cout << "Largest element: " << floatArray.findLargest() << endl;

    return 0;
}