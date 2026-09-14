
5.cpp
Page
1
/
1
100%
#include<iostream>
using namespace std;

class BankAccount{
    int accountNo;
    float balance;
    static int totalAccounts;

public:
   
    BankAccount(int accNo,float bal){
        accountNo=accNo;
        balance = bal;
        totalAccounts++;
    }


    friend void displayDetails(BankAccount b);

    static void showTotalAccounts(){
        cout<<"Total accounts created: "<< totalAccounts<<endl;
    }
};

int BankAccount::totalAccounts=0;


void displayDetails(BankAccount b){
    cout<<"Account No: "<<b.accountNo<<endl;
    cout<<"Balance: Rs. "<< b.balance<< endl;
}

int main(){
    BankAccount acc1(101, 15000.50);
    BankAccount acc2(102, 25000.00);
    BankAccount acc3(103, 5000.75);

    cout<<"--- Account Details ---"<<endl;
    displayDetails(acc1);
    displayDetails(acc2);
    displayDetails(acc3);

    cout<<endl;
    BankAccount::showTotalAccounts();

    return 0;
}
Displaying 5.cpp.