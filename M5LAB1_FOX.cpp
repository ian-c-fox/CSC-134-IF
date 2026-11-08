// CSC 134
// M5LAB1
// Ian Fox
// 11/8/2026
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;
void main_menu();
void into_house();
void run_past();
void into_car();
void fight_back();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0; 
}

void main_menu() {
    int option;
    cout << "Main Menu" << endl;
    cout << "You are running from a violent walking tree" << endl;
    cout << "As you run you spot an abandoned house with a rusty car in the parking lot" << endl;
    cout << "Do you:" << endl;
    // choices
    cout << "1: Run into the house" << endl;
    cout << "2: Run past the house" << endl;
    cout << "3: Get into the car" << endl;
    cout << "4: Fight the tree" << endl;
    cin >> option; 
    // create choices code
    if (1 == option){
        into_house();
    }
    else if(2 == option){
        run_past();
    }    
    else if(3 == option){
        into_car();
    }
    else if(4 == option){
        fight_back();
    }
    else{
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        main_menu();
    }
}

void into_house(){
    int choice;
    cout << "You run into the house and slam the door behind you." << endl;
    cout << "The tree is slamming into the door trying to get through." << endl;
    cout << "Do you:" << endl;
    cout << "1: Barricade the door" << endl;
    cout << "2: Hide" << endl;
    cin >> choice;
    if (1 == choice){
         cout << "As you try to barricade the door it comes crashing down on top of you." << endl;
         cout << "GAME OVER!" << endl;
    }
    else if(2 == choice){
        cout << "You climb into the kitchen pantry and shut the door." << endl;
        cout << "You hear the door collapse and the rustling of tree branches." << endl;
        cout << "Eventually the noise trails to the door and fades out." << endl;
        cout << "You exit the house and walk into the sunset, chugging maple syrup you stole from the tree." << endl;
        cout << "YOU WIN!" << endl;
    }
    else{
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); 
        into_house();  
    }
}

void run_past(){
    int choice;
    cout << "You sprint past the house and tree continues chasing you." << endl;
    cout << "As you run you spot a Waffle House and a Library." << endl;
    cout << "The tree is catching up to you and you need to find help fast." << endl;
    cout << "Do you:" << endl;
    cout << "1: Run into the Waffle House" << endl;
    cout << "2: Run into the library" << endl;
    cin >> choice;
    if (1 == choice){
        cout << "You sprint into the Waffle House and the tree follows you inside." << endl;
        cout << "You spot Halie Booth, the famous Waffle House Wendy behind the counter and beg for help." << endl;
        cout << "The tree chucks a chair at Halie, and she deflects it back, pushing the tree out of the store." << endl;
        cout << "The violent tree reteats into the distance and you sit down to order a waffle, delicious with maple syrup." << endl;
        cout << "YOU WIN!" << endl;
    }
    else if(2 == choice){
        cout << "You sprint into the Library, but there is no one inside." << endl;
        cout << "The dead ancestors of the violent tree were used to create these books." << endl;
        cout << "The tree is enraged by this building and you are now cornered." << endl;
        cout << "GAME OVER!" << endl;
    }
    else{
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); 
        run_past();
    }
}

void into_car(){
    int choice;
    cout << "You sprint towards the car and manage to get inside." << endl;
    cout << "The car will not turn on, but you do find an axe in the back seat." << endl;
    cout << "Do you:" << endl;
    cout << "1: Fight with the axe" << endl;
    cout << "2: Hide in the car" << endl;
    cin >> choice;
    if (1 == choice){
        cout << "You exit the car and attack the tree with the axe." << endl;
        cout << "After chopping off two branches, the tree retreats into the distance" << endl;
        cout << "With the tree gone, you can finally enjoy your jar of maple syrup." << endl;
        cout << "YOU WIN!" << endl;
    }
    else if(2 == choice){
        cout << "You hunker down in the car as the tree circles it smacking the windows." << endl;
        cout << "You chug maple syrup to pass the time and the tree eventually gives up and disappears." << endl;
        cout << "YOU WIN!" << endl;
    }
    else{
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); 
        into_car();
    }
}

void fight_back(){
    int choice;
    cout << "You charge the tree and get ready for a brutal duel." << endl;
    cout << "Do you:" << endl;
    cout << "1: Target the roots" << endl;
    cout << "2: Target the branches" << endl;
    cin >> choice;
    if (1 == choice){
        cout << "You target the roots and rip them off the tree." << endl;
        cout << "The tree is immobilized, but its sharp branches are still able to pierce you." << endl;
        cout << "As you lay on the ground facing the sky, you smile knowing the tree will never kill again." << endl;
        cout << "YOU... TIED..." << endl;
    }
    else if(2 == choice){
        cout << "You begin ripping off the trees branches and struggles to pull you off." << endl;
        cout << "With no branches to attack with, the tree retreats into the distance." << endl;
        cout << "You chug your maple syrup and carry the branches home to use as fire wood" << endl;
        cout << "YOU WIN!" << endl;
    }
    else{
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); 
        fight_back();
    }
}
