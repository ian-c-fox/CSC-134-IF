// CSC 134
// M5HW1 - GOLD
// Ian Fox
// 11/16/2026

#include <iostream>
#include <iomanip>

using namespace std;
void questionOne(); 
void questionTwo(); 
void questionThree(); 
void questionFour(); 
void questionFive(); 

int main() // question 6
{
    int option = 0;
    while (option != 6){
        cout << "M5HW1 Menu:" << endl;
        cout << "1. Question One: Average Rainfall Calculator" << endl;
        cout << "2. Question Two: Block Volume Calculator" << endl;
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
    double length, width, height, vol;
    cout << "Enter the length of the block: ";
    cin >> length;
    while (length <= 0){
            cout << "Invalid input. Please enter a number higher than 0: ";
            cin >> length;
        }
    cout << "Enter the width of the block: ";
    cin >> width;
    while (width <= 0){
            cout << "Invalid input. Please enter a number higher than 0: ";
            cin >> width;
        }
    cout << "Enter the height of the block: ";
    cin >> height;
    while (height <= 0){
            cout << "Invalid input. Please enter a number higher than 0: ";
            cin >> height;
        }
    vol = length * width * height;
    cout << "The volume of the block is " << vol << "." << endl;
    cout << endl;
}

void questionThree(){
    int num;
    string numeral;
    cout << "Enter a number 1-10: ";
    cin >> num;
    while (num <= 0 || num >= 11){
        cout << "Invalid input. Please enter a number 1-10: ";
        cin >> num;
    }
    
    if (num == 1){
        numeral = "I";
    }
    else if (num == 2){
        numeral = "II";
    }
    else if (num == 3){
        numeral = "III";
    }
    else if (num == 4){
        numeral = "IV";
    }
    else if (num == 5){
        numeral = "V";
    }
    else if (num == 6){
        numeral = "VI";
    }
    else if (num == 7){
        numeral = "VII";
    }
    else if (num == 8){
        numeral = "VIII";
    }
    else if (num == 9){
        numeral = "IX";
    }
    else if (num == 10){
        numeral = "X";
    }
    cout << "The Roman numeral version of " << num << " is " << numeral << "." << endl;
    cout << endl;
}

void questionFour(){
    int option;
    cout << "Geometry Calculator:" << endl;
    cout << "1. Calculate the area of a Circle" << endl;
    cout << "2. Calculate the area of a Rectangle" << endl;
    cout << "3. Calculate the area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Please Select An Option 1-4: ";
    cin >> option;
    while (option < 1 || option > 4){
        cout << "Invalid input. Please enter a number from 1 to 4: ";
        cin >> option;
    }
    if (1 == option){
        double radius, area;
        const double pi = 3.14159;
        cout << "Input the radius of the circle: ";
        cin >> radius;
        while (radius < 0){
        cout << "The radius cannot be less than 0, please enter a valid number: ";
        cin >> radius;}
        area = pi * (radius * radius);
        cout << "The area of the circle is " << area << "." << endl;
    }
    else if(2 == option){
           double length, width, area;
           cout << "Input the length of the rectangle: ";
           cin >> length;
           while (length < 0){
            cout << "The length cannot be less than 0, please enter a valid number: ";
            cin >> length;}
            cout << "Input the width of the rectangle: ";
           cin >> width;
           while (width < 0){
            cout << "The width cannot be less than 0, please enter a valid number: ";
            cin >> width;}
            area = length * width;
            cout << "The area of the rectangle is " << area << "." << endl;
    }
    else if(3 == option){
        double base, height, area;
           cout << "Input the length of the triangle's base: ";
           cin >> base;
           while (base < 0){
            cout << "The length cannot be less than 0, please enter a valid number: ";
            cin >> base;}
            cout << "Input the height of the triangle: ";
           cin >> height;
           while (height < 0){
            cout << "The height cannot be less than 0, please enter a valid number: ";
            cin >> height;}
            area = (base * height) * 0.5;
            cout << "The area of the triangle is " << area << "." << endl;
    }
    else if(4 == option){
        cout << "TERMINATING GEOMETRY CALCULATOR..." << endl;
    }
    cout << endl;
}

void questionFive(){
    double speed, distance;
    int time;
    cout << "What is the speed of the vehicle in MPH?: ";
    cin >> speed;
    while (speed < 0){
        cout << "The speed cannot be less than 0, please enter a valid number: ";
        cin >> speed;}
    cout << "How many hours has it traveled?: ";
    cin >> time;
    while (time < 1){
        cout << "The time cannot be less than 1, please enter a valid number: ";
        cin >> time;}
    cout << endl;
    cout << "Hour \t Distance travelled" << endl;
    cout << "-------------------------------" << endl;
    for (int i=1; i <= time; i++) {
        distance = speed * i;
        cout << i << "\t" << distance << endl;
    }
    cout << endl;
}
