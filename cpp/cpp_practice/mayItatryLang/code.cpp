#include <iostream>
using namespace std;

int main() {

    char operation[4] = { '+', '-', '*', '/'};
    int index;
    char Do;
    double firstNumber, secondNumber, result;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Enter operation \n 0 for + \n 1 for - \n 2 for * \n 3 for /" << endl;
    cin >> index;
    Do = operation [index];

        switch (Do) {
        case '+':
            result = firstNumber + secondNumber;
            cout << "The answer is: " << result;
            break;
        case '-':
            result = firstNumber - secondNumber;
            cout << "The answer is: " << result;
            break;
        case '*':
            result = firstNumber * secondNumber;
            cout << "The answer is: " << result;
            break;
        case '/':
            if (secondNumber == 0) {
                cout << "Error";
            }
            else {
                result = firstNumber / secondNumber;
                cout << "The answer is: " << result;
            }
            break;
        default:
         cout << "Invalid operator.";
    }
    

    // cout << "You selected " << operation[index]; " as your operation!";

    return 0;
}
