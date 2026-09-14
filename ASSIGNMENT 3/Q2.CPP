#include<iostream>
using namespace std;

class Number{
    int a;
    int b;

public:
    
    Number(int x,int y){
        a=x;
        b = y;
    }

   
    friend void calculateSum(Number n);
};


void calculateSum(Number n){
    int sum = n.a+n.b;
    cout<<"Sum of numbers: "<< sum<<endl;
}

int main(){
    Number num(15,25);

    calculateSum(num);

    return 0;
}