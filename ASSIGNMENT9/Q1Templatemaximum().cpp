#include <iostream>
using namespace std;
template <typename T >
T maximum (T a ,T b){
    return (a>b)?a:b;
}

int main(){
    int int1=15;
    int int2=42;
    cout<<"testing with inegers:\n";
    cout<<"the maximum of "<<int1<<" and "<<int2<<" is "<<maximum(int1, int2)<<'\n';
double float1=23.45;
double float2=12.89;
cout<<"testing with floating-point numbers:\n";
cout<<"the maximum of"<<float1<<"and"<<float2<<"is:"<<maximum(float1,float2)<<"\n";
return 0;
}