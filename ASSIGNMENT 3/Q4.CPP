#include<iostream>
using namespace std;

class Student{
    static int count;

public:
    
    void registerStudent(){
        count++;
    }

  
    static void showCount(){
        cout<<"Total objects created: "<< count<<endl;
    }
};

int Student::count=0;

int main(){
    Student s1;
    s1.registerStudent();

    Student s2;
    s2.registerStudent();

    Student s3;
    s3.registerStudent();

    Student::showCount();

    return 0;
}