#include <iostream>

using namespace std;

class DemoClass {
private:
   
    void privateHelperFunction() {
        cout << "-> Private member function successfully called/accessed from inside the class!\n";
    }

public:
    
    void publicInterfaceFunction() {
        cout << "Inside public member function...\n";
        
       
        privateHelperFunction();
        
        cout << "Returned control back to public member function.\n";
    }
};

int main() {
   
    DemoClass obj;

    cout << "--- Demonstrating Private Member Function Access ---\n";
    
   
    obj.publicInterfaceFunction();

   

    return 0;
}