#include <iostream>
#include <stdexcept>
using namespace std;

class LibraryAccount {
private:
    int availableBooks;

public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int amount) {
        if (amount > availableBooks) {
            throw runtime_error("Error: Withdrawal amount exceeds available balance.");
        }
        availableBooks -= amount;
        cout << amount << " book(s) issued successfully. Remaining balance: " << availableBooks << endl;
    }
};

int main() {
    LibraryAccount myAccount(15);
    int requestAmount;

    cout << "Enter number of books to issue: ";
    cin >> requestAmount;

    try {
        myAccount.issueBook(requestAmount);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}