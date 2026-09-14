#include <iostream>

using namespace std;

int main() {
    

    cout << "--- For Loop Variations ---\n";

    cout << "Standard for loop:\n";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    cout << "For loop without initialization in construct:\n";
    int j = 0;
    for (; j < 5; j++) {
        cout << j << " ";
    }
    cout << "\n\n";

    cout << "For loop without increment in construct:\n";
    for (int k = 0; k < 5;) {
        cout << k << " ";
        k++;
    }
    cout << "\n\n";

    cout << "For loop with only condition inside:\n";
    int m = 0;
    for (; m < 5;) {
        cout << m << " ";
        m++;
    }
    cout << "\n\n";


    cout << "--- While Loop Variations ---\n";

    cout << "Standard while loop:\n";
    int w1 = 0;
    while (w1 < 5) {
        cout << w1 << " ";
        w1++;
    }
    cout << "\n\n";

    cout << "While loop with compound condition:\n";
    int w2 = 0;
    while (w2 < 10) {
        cout << w2 << " ";
        w2 += 2; 
    }
    cout << "\n\n";

    cout << "--- Do-While Loop Variations ---\n";
    cout << "Standard do-while loop:\n";
    int dw1 = 0;
    do {
        cout << dw1 << " ";
        dw1++;
    } while (dw1 < 5);
    cout << "\n\n";
    cout << "Do-while loop with initially false condition:\n";
    int dw2 = 10;
    do {
        cout << "Executed once even though condition (dw2 < 5) is false. Value: " << dw2 << "\n";
        dw2++;
    } while (dw2 < 5);

    return 0;
}