#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;

    // Insert elements at the end
    myList.push_back(20);
    myList.push_back(30);

    // Insert elements at the beginning
    myList.push_front(10);
    myList.push_back(40);

    cout << "List after insertions: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Remove an element (e.g., remove the value 20)
    myList.remove(20);

    cout << "List after removing 20: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}