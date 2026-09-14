#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    double currentCGPA;

  
    void addDetails() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin.ignore();
        getline(cin, degree);
        cout << "Enter Hostel: ";
        getline(cin, hostel);
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    
    void updateDetails() {
        cout << "\n--- Updating Details for " << name << " ---\n";
        cout << "Enter new Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter new Degree: ";
        getline(cin, degree);
    }

   
    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
        cout << "CGPA updated successfully!\n";
    }

  
    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin.ignore();
        getline(cin, hostel);
        cout << "Hostel updated successfully!\n";
    }

    
    void displaydetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name        : " << name << "\n";
        cout << "Roll No     : " << rollNo << "\n";
        cout << "Degree      : " << degree << "\n";
        cout << "Hostel      : " << hostel << "\n";
        cout << "Current CGPA: " << currentCGPA << "\n";
        cout << "-----------------------\n";
    }
};

int main() {
    
    Student student1;


    cout << "--- Enter Student Information ---\n";
    student1.addDetails();

  
    student1.displaydetails();

  
    cout << "\nUpdating CGPA...\n";
    student1.updateCGPA();

 
    cout << "\nUpdating Hostel...\n";
    student1.updateHostel();

   
    student1.displaydetails();

    return 0;
}