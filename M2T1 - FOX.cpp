// CSC 134
// M1LAB
// Ian Fox
// 8-27-2026

#include <iostream>
using namespace std;

int main() {
    // this program will simulate an apple orchard.
    // the owner's name input
    string name;
    string firstName; 
    string lastName;
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter your last name: ";
    cin >> lastName;
    name = firstName + " " + lastName;
    // number of apples owned input
    int apples;
    cout << "Enter the amount of apples in stock: ";
    cin >> apples;
    //price per apple input
    double pricePerApple;
    cout << "Enter the price per apple: ";
    cin >> pricePerApple;

    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;

    // Print all the information about the orchard
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each. " << endl;
    cout << "The total for all apples is $";
    cout << totalPrice << "." << endl;

}
