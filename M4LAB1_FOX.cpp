// CSC 134
// M4LAB1
// Ian Fox
// 10-23-2026

#include <iostream>
using namespace std;

int main() {
    int height, width;
    cout << "Enter the height of the square: ";
    cin >> height;
    cout << "Enter the width of the square: ";
    cin >> width;
    cout << endl;

    for (int i=0; i < height; i++) {
        for (int j=0; j < width; j++) {
        cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
