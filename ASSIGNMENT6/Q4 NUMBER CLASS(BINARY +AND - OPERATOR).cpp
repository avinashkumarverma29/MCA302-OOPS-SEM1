#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Overloading + operator
    Number operator+(const Number& obj) {
        return Number(this->value + obj.value);
    }

    // Overloading - operator
    Number operator-(const Number& obj) {
        return Number(this->value - obj.value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number n1(30), n2(12);

    cout << "First Number: "; n1.display();
    cout << "Second Number: "; n2.display();

    Number sum = n1 + n2;
    Number diff = n1 - n2;

    cout << "Result of addition (+): "; 
    sum.display();
    
    cout << "Result of subtraction (-): "; 
    diff.display();

    return 0;
}