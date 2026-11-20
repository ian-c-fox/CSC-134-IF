/*
CSC 134
M6T1 - Loops and Arrays
Ian Fox
11/20/2026
*/

#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    cout << "Method 1: No array" << endl;
    method1();
    cout << endl;
    cout << "Method 2: With array" << endl;
    method2();
    return 0;
}

// function definitions
void method1() {
    cout << "Enter the amount of cars that passed the site per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int carToday;     // current value, to add
    int carTotal = 0; // add up 
    double carAvg = 0;// average

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> carToday;
        carTotal += carToday;
        count++; // Move to next day
    }
    cout << "Total = " << carTotal << endl;
    carAvg = (double) carTotal / SIZE;
    cout << "Average = " << carAvg << endl;
}

void method2() {
    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"}; // initialized
    int car[SIZE]; // not initialized
    int carTotal = 0;
    double carAvg = 0.0;

    for (int i=0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> car[i];
    }
    cout << "Day\tcar" << endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t" << car[i] << endl;
        // find the total
        carTotal += car[i];
    }
    carAvg = (double) carTotal / SIZE;
    cout << "Total = " << carTotal << endl;
    cout << "Average = " << carAvg << endl;
    cout << endl; 
}
