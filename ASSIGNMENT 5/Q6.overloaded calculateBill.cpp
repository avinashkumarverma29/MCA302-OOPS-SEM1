#include <iostream>
using namespace std;

class Bill {
public:
    // Bill for one item using quantity and unit price
    double calculateBill(int quantity, double unitPrice) {
        return quantity * unitPrice;
    }
    
    // Bill for two items using their quantities and prices
    double calculateBill(int qty1, double price1, int qty2, double price2) {
        return (qty1 * price1) + (qty2 * price2);
    }
    
    // Bill for a bill amount after applying a discount percentage
    double calculateBill(double amount, double discountPercentage) {
        double discount = amount * (discountPercentage / 100.0);
        return amount - discount;
    }
};

int main() {
    Bill b;
    cout << "Bill for 1 item (Qty: 3, Price: 50): $" 
         << b.calculateBill(3, 50.0) << endl;
         
    cout << "Bill for 2 items (Item1: 2x$10, Item2: 4x$15): $" 
         << b.calculateBill(2, 10.0, 4, 15.0) << endl;
         
    cout << "Bill after 10% discount on $200: $" 
         << b.calculateBill(200.0, 10.0) << endl;
         
    return 0;
}