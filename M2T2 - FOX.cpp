// CSC 134
// M2T2
// Ian Fox
// 9-21-2026

#include <iostream>
using namespace std;

int main() {
// declare vars
double mealPrice = 5.99;
double taxRate = 0.08;
//calculate values
double taxes = mealPrice * taxRate;
double finalPrice = mealPrice + taxes;

// print result
cout << "Price before tax: $" << mealPrice << endl;
cout << "Taxes owed: $" << taxes << endl;
cout << "Final price of this meal is: $" << finalPrice << endl;

}
