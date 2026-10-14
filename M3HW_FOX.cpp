// CSC 134
// M3HW1 - Gold
// Ian Fox
// 10-14-2026

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;
void Fight();

int main() {
    cout << "Question 1:" << endl;
    string Answer;
    cout << "Hello! I am a C++ Program!" << endl;
    cout << "Do you like me? Please type yes or no" << endl;
    cin >> Answer;
    if ("yes" == Answer){
        cout << "That’s great! I’m sure we’ll get along." << endl;
    }
    else if ("no" == Answer){
        cout << "Well, maybe you’ll learn to like me later." << endl;
    }
    else{
        cout << "If you’re not sure… that’s OK." << endl;
    }


    cout << "Question 2:" << endl;
    // declare vars
    int choice;
    double mealPrice;
    double finalPrice;
    double tip;
    double taxRate = 0.08;
    double tipRate = 0.15;
    int noOutput;
    // get info
    cout << "Price of the meal: $";
    cin >> mealPrice;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> choice;
    //calculate values
    double taxes = mealPrice * taxRate;
    if (1 == choice){
        tip = mealPrice * tipRate;
        finalPrice = mealPrice + taxes + tip;
        noOutput = 0;
    }
    else if (2 == choice){
        tip = 0;
        finalPrice = mealPrice + taxes;
        noOutput = 0;
    }
    else{
        cout << "Error detected. Please restart program and try again" << endl;
        noOutput = 1;
    }
    // print result
    if (0 == noOutput){
    cout << fixed << setprecision(2);
    cout << "Price before tax: $" << mealPrice << endl;
    cout << "Taxes owed: $" << taxes << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Final price of this meal is: $" << finalPrice << endl;
    }


    cout << "Question 3:" << endl;
    string option;
    cout << "A violent walking tree is approaching, will you choose to fight or run?" << endl;
    cout << "You decide to ";
    cin >> option; 
    // correct
    if ("fight" == option){
        Fight();
    }
    // death
    else if("run" == option){
        cout << "You try to run, but you trip on a rock and fall off a cliff to your death." << endl;
        cout << "GAME OVER!" << endl;
    }
    else{
        cout << "You are eviscerated by the deadly tree as you try to figure out a plan."<< endl;
        cout << "GAME OVER!" << endl;
    }
    
    
    cout << "Question 4:" << endl;
    cout << "It's time to do some math!" << endl;
    int seed = time(0); 
    srand (seed);
    const int MAX = 10;
    int numOne = rand() % MAX;
    int numTwo = rand() % MAX;
    int answer = numOne + numTwo;
    int userAnswer;
    cout << numOne << " + " << numTwo << " = ";
    cin >> userAnswer;
    if (userAnswer == answer){
        cout << "Correct!" << endl;
    }
    else{
        cout << "This answer is incorrect" << endl;
    }

    
    return 0;
}

void Fight(){
    string choice;
    cout << "You charge at the tree with all your might." << endl;
    cout << "The branches scrape at your skin, will you continue to attack or retreat?" << endl;
    cout << "Your decision is to ";
    cin >> choice;
    
    if ("attack" == choice){
        cout << "You attack the tree with all your might and it slumps over." << endl;
        cout << "You have defeated the walking tree!" << endl;
    }
    else if("retreat" == choice){
        cout << "As you try to escape the tree summons a deadly horde of bees." << endl;
        cout << "You are attacked by the horde of bees and lose your life." << endl;
        cout << "GAME OVER!" << endl;
    }
    else{
        cout << "The tree uses your indecisiveness to sneak attack you."<< endl;
        cout << "As you struggle to break free you slowly enter a deep slumber." << endl;
        cout << "GAME OVER!" << endl;
    }
}

