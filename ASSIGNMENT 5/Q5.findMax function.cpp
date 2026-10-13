#include <iostream>
using namespace std;

class Maximum {
public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }
    
    int findMax(int a, int b, int c) {
        int max = (a > b) ? a : b;
        return (max > c) ? max : c;
    }
    
    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum m;
    cout << "Greater of 2 integers (5, 10): " << m.findMax(5, 10) << endl;
    cout << "Greatest of 3 integers (5, 15, 10): " << m.findMax(5, 15, 10) << endl;
    cout << "Greater of 2 decimals (10.5, 8.9): " << m.findMax(10.5, 8.9) << endl;
    
    return 0;
}