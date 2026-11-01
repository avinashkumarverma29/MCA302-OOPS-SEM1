#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person Constructor executed." << endl;
    }
    
    // Virtual destructor ensures derived class destructor is called 
    // when deleting an object through a base class pointer.
    virtual ~Person() {
        cout << "Person Destructor executed." << endl;
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student Constructor executed." << endl;
    }
    
    ~Student() {
        cout << "Student Destructor executed." << endl;
    }
};

int main() {
    cout << "--- Allocating memory ---" << endl;
    Person* p = new Student();
    
    cout << "\n--- Deallocating memory ---" << endl;
    delete p; 
    
    /* 
       Observation and Explanation:
       When 'delete p' is called, because the base class destructor is marked as virtual,
       the program correctly resolves the actual object type at runtime. 
       It will execute the destructors in the reverse order of construction:
       1. First, the derived class (Student) destructor is called.
       2. Then, the base class (Person) destructor is called.
    */
    
    return 0;
}