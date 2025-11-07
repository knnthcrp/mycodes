#include <iostream>

using namespace std;

int main() {
    float firstNumber, secondNumber, result;
    char operation, choice;

    std::cout << "Enter first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> secondNumber;   

    switch (operation) {
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
    return 0;
}
