#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;

public:

    // Default constructor
    Complex(){
        real = 0;
        imaginary = 0;
    }

    Complex(int r,int i){
        real = r;
        imaginary = i;
    }

    void display(){
        cout<<real<<" + "<<imaginary<<"i"<< endl;
    }
};

int main(){

  
    Complex c1;

    
    Complex c2(5,3);

    cout<<"Complex number 1: ";
    c1.display();

    cout<<"Complex number 2: ";
    c2.display();

    return 0;
}