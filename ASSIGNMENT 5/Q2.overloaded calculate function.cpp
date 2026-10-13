#include <iostream>
using namespace std;

class Area {
public:
    // Area of a square
    double calculate(int side) {
        return side * side;
    }
    
    // Area of a rectangle
    double calculate(double length, double breadth) {
        return length * breadth;
    }
    
    // Area of a circle
    double calculate(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Area a;
    cout << "Area of square (side 4): " << a.calculate(4) << endl;
    cout << "Area of rectangle (length 5.5, breadth 3.2): " << a.calculate(5.5, 3.2) << endl;
    cout << "Area of circle (radius 2.5): " << a.calculate(2.5) << endl;
    
    return 0;
}