#include <iostream>
#include <string>

using namespace std;
namespace FirstLibrary {
   
    string message = "Hello from the First Library!";

  
    void display() {
        cout << "Executing display() inside FirstLibrary namespace." << endl;
    }
}
namespace SecondLibrary {
    
    string message = "Hello from the Second Library!";

  
    void display() {
        cout << "Executing display() inside SecondLibrary namespace." << endl;
    }
}

int main() {
    cout << "--- Demonstrating Namespace Scope Resolution ---\n\n";

    
    cout << "1. Accessing FirstLibrary:" << endl;
    cout << "Message: " << FirstLibrary::message << endl;
    FirstLibrary::display();

    cout << endl;

    
    cout << "2. Accessing SecondLibrary:" << endl;
    cout << "Message: " << SecondLibrary::message << endl;
    SecondLibrary::display();

    cout << endl;

    
    cout << "3. Using 'using namespace FirstLibrary' locally:" << endl;
    {
        using namespace FirstLibrary;
       
        cout << "Local message: " << message << endl;
        display();
    }

    return 0;
}