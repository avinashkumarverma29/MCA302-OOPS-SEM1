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

void createObject(){
    cout<<"Inside separate function:"<<endl;

    Demo d2;

    cout<<"End of separate function"<< endl;
}

int main(){
    cout<<"Inside main:"<< endl;

    Demo d1;

    createObject();

    cout<<"End of main"<<endl;

    return 0;
}
