#include <iostream>

using namespace std;

int main () {

    int numInt;
    double numDouble;
    // int to double, double to int, int to char

    cout << "Enter an integer: ";
    cin >> numInt;

    cout << "Enter a number with decimal point: ";
    cin >> numDouble;

    double intToDouble = numInt; //int to double
    int doubleToInt  = (int)numDouble; // double to integer
    char intTochar = (char)numInt;

    cout << "These are the converted numbers : " << endl;
    cout << "Integer to Double: " << intToDouble << endl;
    cout << "Double to Integer: " << doubleToInt << endl;
    cout << "Integer to Char: " << intTochar << endl;

    return 0;

    



}