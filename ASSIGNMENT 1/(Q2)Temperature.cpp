#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
	
    fahrenheit = (9.0 * celsius / 5.0) + 32.0;

    cout << celsius << " degree Celsius is equal to " << fahrenheit << " degree Fahrenheit." << endl;

    return 0;
}