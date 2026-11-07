#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    int sum = 0;

    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
        sum += num;
    }

    cout << "\nSum of elements: " << sum << endl;
    return 0;
}