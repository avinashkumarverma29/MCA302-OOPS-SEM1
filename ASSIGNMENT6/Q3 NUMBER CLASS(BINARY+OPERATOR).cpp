#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Overloading the binary + operator
    Number operator+(const Number& obj) {
        Number temp;
        temp.value = this->value + obj.value;
        return temp;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number num1(15), num2(20);
    
    cout << "Number 1 value: "; 
    num1.display();
    
    cout << "Number 2 value: "; 
    num2.display();

    Number sum = num1 + num2;

    cout << "Result after addition: ";
    sum.display();

    return 0;
}