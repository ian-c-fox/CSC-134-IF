// CSC 134
// M2HW - Gold
// Ian Fox
// Input date before submission
// Each question will run in order back to back

#include <iostream>
#include <iomanip>
using namespace std; 

int main(){
    // Question 1
    cout << "Question 1:" << endl;
    // set up vars
    double starting, deposit, withdrawal;
    int accountNum = 1340901;
    string name;
    //get info
    cout << "Name of the account holder: ";
    getline(cin, name);
    cout << "Starting account balance: $";
    cin >> starting;
    cout << "Amount deposited into account: $";
    cin >> deposit;
    cout << "Amount withdrawn into account: $";
    cin >> withdrawal;
    //calculate
    double finalBalance = starting + deposit - withdrawal;
    //output
    cout << "Account Holder: " << name << endl;
    cout << "Account Number: " << accountNum << endl;
    cout << fixed << setprecision(2);
    cout << "Final account balance: $" << finalBalance << endl;

    // Question 2
    cout << "Question 2:" << endl;
    const double CostPerCubicFoot = 0.3;
    const double ChargePerCubicFoot = 0.52;
    double length, width, height;
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
    cout << "Cost of building crate: " << cost << endl;
    cout << "Price to charge customer: " << charge << endl;
    cout << "Profit made from crate: " << profit << endl;

    // Question 3
    cout << "Question 3:" << endl;
    double pizzaOrder;
    double slicesPer;
    double visitorNum;
    cout << "How many pizzas were ordered: ";
    cin >> pizzaOrder;
    cout << "How many slices per pizza: ";
    cin >> slicesPer;
    cout << "How many visitors are attending: ";
    cin >> visitorNum;
    //calculations
    double pizzaNeeded = visitorNum * 3;
    double pizzaAvailable = pizzaOrder * slicesPer;
    double remainingSlice = pizzaAvailable - pizzaNeeded;
    //output
    cout << "The amount of pizza slices remaining is ";
    cout << remainingSlice << endl;


    // Question 4
    cout << "Question 4:" << endl;
    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + school;
    string cheerTwo = letsGo + team;
    //output
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
}
