// CSC 134
// M3T2
// Ian Fox
// 10-10-2026

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    //setup and get seed
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    //cout << "Your seed is " << seed << endl;

    //seed the rng
    srand (seed);
    //rolling
    const int MAX = 6;
    int diceOne = rand() % MAX + 1;
    int diceTwo = rand() % MAX + 1;

    //calc
    int total = diceOne + diceTwo;

    //output
    cout << "Your first dice rolled " << diceOne << endl;
    cout << "Your second dice rolled " << diceTwo << endl;
    cout << "Your total roll is " << total << endl;

    //win or lose check
    if (total == 7){
        cout << "Lucky seven! You win." << endl;
    } 
    else if ( total == 11){
        cout <<"Eleven is a winner!" << endl;
    }
    else if ( total == 2) {
        cout << "Snake eyes! You lose." << endl;
    }
    else if ( total == 3) {
        cout << "Craps! You lose." << endl;
    }
    else if ( total == 12){
        cout << "Box cars! You lose." << endl;
    }
    else{
        cout <<"Your point is " << total << " but we'll do that part later." << endl;
    }

    return 0;
}
