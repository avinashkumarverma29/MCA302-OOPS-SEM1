#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    
    string name;
    int rollNo;
    string degree;
    string hostel;
    double currentCGPA;

  
    bool isValidCGPA(double cgpa) {
        return (cgpa >= 0.0 && cgpa <= 10.0);
    }

public:
    
    void addDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin.ignore();
        getline(cin, degree);
        cout << "Enter Hostel: ";
        getline(cin, hostel);
        
        cout << "Enter Current CGPA (0-10): ";
        cin >> currentCGPA;
        
        while (!isValidCGPA(currentCGPA)) {
            cout << "Invalid CGPA! Please enter a value between 0.0 and 10.0: ";
            cin >> currentCGPA;
        }
    }

   
    void updateDetails() {
        cout << "\n--- Updating Details for " << name << " ---\n";
        cin.ignore();
        cout << "Enter new Name: ";
        getline(cin, name);
        cout << "Enter new Degree: ";
        getline(cin, degree);
    }

 
    void updateCGPA() {
        double newCGPA;
        cout << "Enter new CGPA: ";
        cin >> newCGPA;
        
        if (isValidCGPA(newCGPA)) {
            currentCGPA = newCGPA;
            cout << "CGPA updated successfully!\n";
        } else {
            cout << "Error: Invalid CGPA value! Update failed.\n";
        }
    }

  
    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin.ignore();
        getline(cin, hostel);
        cout << "Hostel updated successfully!\n";
    }

    
    void displaydetails() {
        cout << "\n--- Student Details (Class Scope) ---\n";
        cout << "Name        : " << name << "\n";
        cout << "Roll No     : " << rollNo << "\n";
        cout << "Degree      : " << degree << "\n";
        cout << "Hostel      : " << hostel << "\n";
        cout << "Current CGPA: " << currentCGPA << "\n";
        cout << "--------------------------------------\n";
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