// CSC 134
// M5T1
// Ian Fox
// 11/7/2026
#include <iostream>
using namespace std;
void sayHello();
int giveTheAnswer();
int double_A_Number(int num);


int main() {
    cout << "Hello from main()" << endl;
    sayHello();
    int myAnswer = giveTheAnswer();
    cout << "The answer is: " << myAnswer << endl;
    // double answer
    int twotimes = double_A_Number(7);
    cout << "Here's another number: " << twotimes << endl;
    return 0;
}

void sayHello(){
    cout << "Hello from sayHello()" << endl;
    return;
}

int giveTheAnswer(){
    return 42;
}

int double_A_Number(int num){
    int newNum = num * 2;
    return newNum;
}
