#include <iostream>
using namespace std;

class Academic {
protected:
    float marks;

public:
    void acceptAcademic() {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }

    void displayAcademic() {
        cout << "Academic Marks: " << marks << endl;
    }
};

class Sports {
protected:
    float sportsScore;

public:
    void acceptSports() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }

    void displaySports() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Result : public Academic, public Sports {
private:
    float totalScore;

public:
    void acceptResult() {
        acceptAcademic();
        acceptSports();
    }

    void calculateTotal() {
        totalScore = marks + sportsScore;
    }

    void displayResult() {
        cout << "\n--- Result Details ---" << endl;
        displayAcademic();
        displaySports();
        cout << "Total Score: " << totalScore << endl;
    }
};

int main() {
    Result r;
    cout << "Enter details for the student:\n";
    r.acceptResult();
    r.calculateTotal();
    r.displayResult();
    return 0;
}