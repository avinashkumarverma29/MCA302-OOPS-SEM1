#include<iostream>
using namespace std;

class Demo{
public:

    // Constructor
    Demo(){
        cout<<"Constructor called"<<endl;
    }

    // Destructor
    ~Demo(){
        cout<<"Destructor called"<< endl;
    }
};

int main(){

    Demo d1;
    Demo d2;
    Demo d3;

    return 0;
}