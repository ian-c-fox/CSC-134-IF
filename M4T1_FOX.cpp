// CSC 134
// M4T1 - While
// Ian Fox
// 10/25/2026


#include <iostream>
using namespace std;
  
int main()
{
    //hello program
    int number = 1;
    while (number < 6) {
        cout << "Hello" << endl;
        number++;
    }
    cout << endl;

    // number program
    const int MinNum = 1, MaxNum = 10;
    int num = MinNum;
    cout << "Number Number Squared" << endl;
    cout << "---------------------------" << endl;
    while (num <= MaxNum){
        cout << num << "            " << (num * num) << endl;
        num++;
    }

    return 0; // done
}
