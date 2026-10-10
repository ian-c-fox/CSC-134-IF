// CSC 134
// M3T1
// Ian Fox
// 10-10-2026
// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;

int main() {
    //vars
    double lenOne, widOne, lenTwo, widTwo;
    double areaOne, areaTwo;

    // get info
    cout << "What's the length of the first rectangle? ";
    cin >> lenOne;
    cout << "What's the width of the first rectangle? ";
    cin >> widOne;
    cout << "What's the length of the second rectangle? ";
    cin >> lenTwo;
    cout << "What's the width of the second rectangle? ";
    cin >> widTwo;

    //calc
    areaOne = lenOne * widOne;
    areaTwo = lenTwo * widTwo;

    //display areas
    cout << "Area of rectangle one: " << areaOne << endl;
    cout << "Area of rectangle two: " << areaTwo << endl;

    return 0;
}
