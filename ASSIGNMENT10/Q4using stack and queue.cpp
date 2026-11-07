#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    // --- STACK (LIFO: Last In, First Out) ---
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "--- Stack Operations ---" << endl;
    cout << "Top element: " << s.top() << endl; // Should be 30
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Should be 20

    // --- QUEUE (FIFO: First In, First Out) ---
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);

    cout << "\n--- Queue Operations ---" << endl;
    cout << "Front element: " << q.front() << endl; // Should be 100
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Should be 200

    return 0;
}