#include<iostream>
using namespace std;

class Box{
    int length;
    int width;
    int height;

public:

    // Default constructor
    Box(){
        length=1;
        width = 1;
        height=1;
    }

    // Parameterized constructor
    Box(int l,int w,int h){
        length=l;
        width = w;
        height=h;
    }

    // Function to calculate and display volume
    void displayVolume(){
        cout<<"Volume of Box: "<<length*width*height<< endl;
    }
};

int main(){

    // Using default constructor
    Box b1;
    b1.displayVolume();

    // Using parameterized constructor
    Box b2(10,5,2);
    b2.displayVolume();

    return 0;
}