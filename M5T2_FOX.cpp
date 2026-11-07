// CSC 134
// M5T2 - More practice with functions
// Ian Fox
// Partner: Copilot AI
// 11/7/2026

#include <iostream>
using namespace std;

// function prototypes
int square(int num); 
void printAnswerLine(int num, int squared); 

int main() {
    // Print the numbers 1 to 10 and their squares.
    for (int i = 1; i <= 10; i++) {
        int squaredI = square(i);
        printAnswerLine(i, squaredI);
    }
    return 0;
}

// Return the square of num.
int square(int num) {
    num = num * num;
    return num;
}

// Print one line of the answer, for example: 3 squared is 9
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}
