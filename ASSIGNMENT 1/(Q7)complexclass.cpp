#include <iostream>

using namespace std;

class Complex {
private:
    
    double real;
    double imaginary;

public:
 
    void set(double r, double i) {
        real = r;
        imaginary = i;
    }

   
    void display() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }

  
    Complex sum(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;
        return result;
    }
};

int main() {
    Complex c1, c2, c3;

    
    cout << "Initializing first complex number (3.5 + 2.5i):\n";
    c1.set(3.5, 2.5);
    cout << "Complex Number 1: ";
    c1.display();


    cout << "\nInitializing second complex number (1.5 + 4.0i):\n";
    c2.set(1.5, 4.0);
    cout << "Complex Number 2: ";
    c2.display();

   
    c3 = c1.sum(c2);

   
    cout << "\nSum of the two complex numbers:\n";
    cout << "Result Complex Number: ";
    c3.display();

    return 0;
}