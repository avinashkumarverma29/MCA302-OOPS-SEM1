#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Integer value: " << i << endl;
    }
    
    void display(double d) {
        cout << "Double value: " << d << endl;
    }
    
    void display(string s) {
        cout << "String value: " << s << endl;
    }
};

int main() {
    Print p;
    p.display(42);
    p.display(3.14159);
    p.display("Hello World");
    
    return 0;
}