// CSC 134
// M3LAB1
// Ian Fox
// 10-10-2026

#include <iostream>
using namespace std;
void Fight();
void Run();
void Attack();
void Retreat();

int main() {
    string choice;
    
    cout << "A violent walking tree is approaching, will you choose to fight or run?" << endl;
    cout << "You decide to ";
    cin >> choice; 

    if ("fight" == choice){
        Fight();
    }
    else if("run" == choice){
        Run();
    }
    else{
        cout << "As you ponder what to do, you remember that walking trees move less than an inch a day."<< endl;
        cout << "You taunt the tree and walk off into the sunset." << endl;
    }
    cout << "The End!" << endl;
    return 0;
}

void Fight(){
    string choice;
    cout << "You charge at the tree with all your might." << endl;
    cout << "The branches scrape at your skin, will you continue to attack or retreat?" << endl;
    cout << "Your decision is to ";
    cin >> choice;
    
    if ("attack" == choice){
        Attack();
    }
    else if("retreat" == choice){
        Retreat();
    }
    else{
        cout << "You realize the tree is not attacking you, your coat is stuck on the branch."<< endl;
        cout << "You pull the branch off and walk away embarrassed." << endl;
    }
}

void Run(){
    cout << "You outrun the tree as it can only move less than an inch per day." << endl;
}

void Attack(){
    cout << "Your relentless attack is a success." << endl;
    cout << "The tree sits branchless as you relish your victory." << endl;
}

void Retreat(){
    cout << "Your tactical retreat is a success." << endl;
    cout << "You will return some day to defeat the tree." << endl;
}
