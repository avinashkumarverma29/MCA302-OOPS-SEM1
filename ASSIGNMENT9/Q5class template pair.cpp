#include <iostream>
#include <string>
using namespace std;

// Class template with two type parameters
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Parameterized constructor
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    // Function to display both values
    void display() const {
        cout << "First Value:  " << first << endl;
        cout << "Second Value: " << second << endl;
    }
};

int main() {
    // Testing with an integer and a string as specified
    cout << "--- Pair (Integer and String) ---" << endl;
    Pair<int, string> studentPair(101, "Avinash");
    studentPair.display();

    cout << endl;

    // Additional demonstration with different data types (Float and Char)
    cout << "--- Pair (Float and Character) ---" << endl;
    Pair<float, char> gradePair(98.5f, 'A');
    gradePair.display();

    cout << endl;

    return 0;
}