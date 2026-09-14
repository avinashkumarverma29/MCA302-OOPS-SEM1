#include <iostream>
#include <string>
using namespace std;

class College {
protected:
    string collegeName;

public:
    College(string cName) {
        collegeName = cName;
        cout << "College Constructor Called. College Name: " << collegeName << endl;
    }
};

class Department : public College {
private:
    string departmentName;

public:
    Department(string cName, string dName) : College(cName) {
        departmentName = dName;
        cout << "Department Constructor Called. Department Name: " << departmentName << endl;
    }

    void displayInfo() {
        cout << "\n--- Information ---" << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};

int main() {
    Department dept("Thapar Institute of Engineering and Technology", "Computer Science");
    dept.displayInfo();
    return 0;
}