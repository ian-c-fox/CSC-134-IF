// CSC 134
// M1LAB
// Ian Fox
// 8-27-2026

#include <iostream>
using namespace std;

int main() {
    // this program will simulate an apple orchard.
    // the owner's name
    string name ="Ian Fox";
    // number of apples owned
    int apples = 100;
    //price per apple
    double pricePerApple = 0.25;

    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;

    // Print all the information about the orchard
    cout << "Welcome to " << name;
    cout << " 's apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each. " << endl;
    cout << "The total for all apples is $";
    cout << totalPrice << "." << endl;

}
