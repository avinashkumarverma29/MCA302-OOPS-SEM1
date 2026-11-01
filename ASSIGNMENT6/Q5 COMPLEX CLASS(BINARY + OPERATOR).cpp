#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    // Overloading + operator to add two complex numbers
    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = this->real + obj.real;
        temp.imaginary = this->imaginary + obj.imaginary;
        return temp;
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "First number = "; 
    c1.display();
    
    cout << "Second number = "; 
    c2.display();

    Complex result = c1 + c2;

    cout << "Result = "; 
    result.display();

    return 0;
}