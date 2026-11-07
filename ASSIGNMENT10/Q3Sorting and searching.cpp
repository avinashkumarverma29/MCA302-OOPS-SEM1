#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {45, 12, 89, 23, 56, 7};

    // Sort the vector
    sort(vec.begin(), vec.end());

    cout << "Sorted vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    int key = 23;
    // binary_search requires the range to be sorted first
    bool found = binary_search(vec.begin(), vec.end(), key);

    if (found) {
        cout << "Element " << key << " found in the vector." << endl;
    } else {
        cout << "Element " << key << " not found in the vector." << endl;
    }

    return 0;
}