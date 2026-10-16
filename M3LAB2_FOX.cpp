// CSC 134
// M3LAB2
// Ian Fox
// 10-16-2026

#include <iostream>
using namespace std;

int main() {
    int grade;
    string letterGrade;
    cout << "Enter your numerical grade: ";
    cin >> grade;

    if (grade > 100){
        letterGrade = "Error, invalid grade.";
    }
    else if (grade >= 90){
        letterGrade = "A";
    }
    else if (grade >= 80){
        letterGrade = "B";
    }
    else if (grade >= 70){
        letterGrade = "C";
    }
    else if (grade >= 60){
        letterGrade = "D";
    }
    else if (grade >= 0){
        letterGrade = "F";
    }
    else {
        letterGrade = "Error, invalid grade";
    }

    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}
