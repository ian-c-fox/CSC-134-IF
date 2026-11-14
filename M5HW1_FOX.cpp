// CSC 134
// M5HW1
// Ian Fox
// 11/11/2026

#include <iostream>
#include <iomanip>

using namespace std;
void questionOne(); // done
void questionTwo(); // not done
void questionThree(); // not done
void questionFour(); // not done
void questionFive(); // not done

int main() // question 6
{
    int option = 0;
    while (option != 6){
        cout << "M5HW1 Menu:" << endl;
        cout << "1. Question One: Average Rainfall Calculator" << endl;
        cout << "2. Question Two: Cube Area Calculator" << endl;
        cout << "3. Question Three: 1-10 Numeral Converter" << endl;
        cout << "4. Question Four: Geometry calculator" << endl;
        cout << "5. Question Five: Distance traveled calculator" << endl;
        cout << "6. Terminate Program" << endl;
        cout << "Please Select An Option 1-6: ";
        cin >> option;
        while (option < 1 || option > 6){
            cout << "Invalid input. Please enter a number from 1 to 6: ";
            cin >> option;
        }
        if (1 == option){
            questionOne();}
        else if(2 == option){
            questionTwo();}    
        else if(3 == option){
            questionThree();}
        else if(4 == option){
            questionFour();}
        else if(5 == option){
            questionFive();}
        else if(6 == option){
            cout << "TERMINATING PROGRAM..." << endl;
        }
    }
    return 0;
}

void questionOne(){
    string monthOne, monthTwo, monthThree;
    double rainOne, rainTwo, rainThree, average;
    cout << "Enter month: ";
    cin >> monthOne;
    cout << "Enter rainfall for " << monthOne << ": ";
    cin >> rainOne;
    cout << "Enter month: ";
    cin >> monthTwo;
    cout << "Enter rainfall for " << monthTwo << ": ";
    cin >> rainTwo;
    cout << "Enter month: ";
    cin >> monthThree;
    cout << "Enter rainfall for " << monthThree << ": ";
    cin >> rainThree;
    // calc
    average = (rainOne + rainTwo + rainThree) / 3; 
    // display
    cout << fixed << setprecision(2);
    cout << "The average rainfall for ";
    cout << monthOne << ", ";
    cout << monthTwo << ", ";
    cout << "and " << monthThree << " is " << average << " inches." << endl;
    cout << endl;
}

void questionTwo(){

}

void questionThree(){

}

void questionFour(){

}

void questionFive(){

}
