#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> studentMap;
    int choice;

    do {
        cout << "\n--- Student Record Management ---" << endl;
        cout << "1. Insert Student Record" << endl;
        cout << "2. Search Student by Roll Number" << endl;
        cout << "3. Display All Records" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int rollNo;
            string name;
            cout << "Enter Roll Number: ";
            cin >> rollNo;
            cout << "Enter Student Name: ";
            cin >> name;
            studentMap[rollNo] = name;
            cout << "Record inserted successfully!" << endl;
        } 
        else if (choice == 2) {
            int rollNo;
            cout << "Enter Roll Number to search: ";
            cin >> rollNo;
            
            auto it = studentMap.find(rollNo);
            if (it != studentMap.end()) {
                cout << "Student Found! Roll No: " << it->first << ", Name: " << it->second << endl;
            } else {
                cout << "Student with Roll Number " << rollNo << " not found." << endl;
            }
        } 
        else if (choice == 3) {
            cout << "\n--- All Student Records ---" << endl;
            if (studentMap.empty()) {
                cout << "No records available." << endl;
            } else {
                for (auto pair : studentMap) {
                    cout << "Roll No: " << pair.first << " | Name: " << pair.second << endl;
                }
            }
        }
    } while (choice != 4);

    return 0;
}