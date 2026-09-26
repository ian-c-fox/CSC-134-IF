// CSC 134
// M2LAB
// Ian Fox
// 9-26-2026

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// constant vars
const double CostPerCubicFoot = 0.23;
const double ChargePerCubicFoot = 0.50;

// get dimensions
double length; 
double width;
double height;
cout << "Length of the crate: ";
cin >> length;
cout << "Width of the crate: ";
cin >> width;
cout << "Height of the crate: ";
cin >> height;

//calculations
double volume = length * width * height;
double cost = volume * CostPerCubicFoot;
double charge = volume * ChargePerCubicFoot;
double profit = charge - cost;

//output
cout << fixed << setprecision(2);
cout << "Volume of crate: " << volume << endl;
cout << "Cost of building crate: $" << cost << endl;
cout << "Price to charge customer: $" << charge << endl;
cout << "Profit made from crate: $" << profit << endl;
}
