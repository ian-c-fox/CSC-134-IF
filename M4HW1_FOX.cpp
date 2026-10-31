// CSC 134
// M4HW1 - Gold
// Ian Fox
// 10-30-2026

#include <iostream>
using namespace std;

int main() {
    int number, answer;
    cout << "Choose a number from 1 to 12 for the times table: ";
    cin >> number;

    while (number < 1 || number > 12){
        cout << "Invalid input. Please enter a number from 1 to 12:";
        cin >> number;
    }
    cout << endl;

    for (int i=1; i <= 12; i++) {
        //calc
        int answer = number * i;
        //output then loop
        cout << number << " times " << i << " is " << answer << "." << endl;
    }

    return 0;
}
