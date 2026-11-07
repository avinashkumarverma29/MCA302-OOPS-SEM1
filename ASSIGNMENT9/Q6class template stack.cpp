#include <iostream>
using namespace std;

// Class template for Stack with a fixed capacity
template <typename T, int capacity>
class Stack {
private:
    T arr[capacity];
    int top;

public:
    // Constructor
    Stack() {
        top = -1; // Stack is initially empty
    }

    // Function to push an element onto the stack
    void push(T val) {
        if (top >= capacity - 1) {
            cout << "Stack Overflow! Cannot push " << val << endl;
            return;
        }
        arr[++top] = val;
        cout << val << " pushed into stack." << endl;
    }

    // Function to pop an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! No elements to pop." << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    // Function to display the stack elements
    void display() const {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Testing with an Integer Stack of capacity 4
    cout << "--- Integer Stack Operations ---" << endl;
    Stack<int, 4> intStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.push(40);
    
    // Trying to push when stack is full (Overflow check)
    intStack.push(50);

    cout << endl;
    intStack.display();

    cout << endl;
    intStack.pop();
    intStack.pop();

    cout << endl;
    intStack.display();

    return 0;
}