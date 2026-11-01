#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor to initialize count
    Counter(int c = 0) : count(c) {}

    // Overloading the prefix unary ++ operator
    void operator++() {
        ++count;
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Before applying ++:" << endl;
    c1.display();

    ++c1; // Applying the overloaded operator

    cout << "After applying ++:" << endl;
    c1.display();

    return 0;
}