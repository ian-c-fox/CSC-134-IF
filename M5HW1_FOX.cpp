// CSC 134
// M5HW1
// Ian Fox
// 11/11/2026

#include <iostream>
using namespace std;
void questionOne(); // not done
void questionTwo(); // not done
void questionThree(); // not done
void questionFour(); // not done
void questionFive(); // not done

int main() // question 6
{
    int option = 0;
    cout << "M5HW1 Menu:" << endl;
    cout << "1. Question One: Average Rainfall Calculator" << endl;
    cout << "2. Question Two: Cube Area Calculator" << endl;
    cout << "3. Question Three: 1-10 Numeral Converter" << endl;
    cout << "4. Question Four: Geometry calculator" << endl;
    cout << "5. Question Five: Distance traveled calculator" << endl;
    cout << "6. Terminate Program" << endl;
    
    while (option != 6){
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

}
void questionTwo(){

}
void questionThree(){

}
void questionFour(){

}
void questionFive(){

}
