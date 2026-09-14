#include<iostream>
using namespace std;

class Student{
    string name;
    int rollNo;

public:
  
    Student(){
        name="Avinash";
        rollNo = 101;
         cout<<"Name: "<< name<<endl;
        cout<<"Roll No: "<<rollNo<< endl;
    }

    
    // void display(){
        // cout<<"Name: "<< name<<endl;
        // cout<<"Roll No: "<<rollNo<< endl;
};


int main(){
    Student s;   
    // s.display();

    return 0;
}