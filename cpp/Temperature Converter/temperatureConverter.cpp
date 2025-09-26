#include <iostream>

using namespace std;

int main() {
    double inputValue, outputValue, celciusTemp, farenheitTemp, kelvinTemp;
    char fromMeasure, toMeasure;
    
    cout << "Enter value: " << endl;
    cin >> inputValue;
    cout << "From? " << endl;
    cin >> fromMeasure;
    cout << "To what?" << endl;
    cin >> toMeasure;

    if (fromMeasure == 'C' || fromMeasure == 'c') {
        if (toMeasure == 'F' || toMeasure == 'f'){
            outputValue = inputValue+=32;
            cout << "Converted to: " << outputValue << endl;
        }

        else if (toMeasure == 'K' || toMeasure == 'k') {
            outputValue = inputValue+=273.15;
            cout << "Converted to: " << outputValue << endl;
        }

        else {
            cout << "Invalid Conversion.";
        }
    }

    else if (fromMeasure = 'F' || fromMeasure == 'f') {
        if (toMeasure == 'C' || toMeasure == 'c'){
            inputValue -=32;
            outputValue = inputValue * (int)5/9;
            cout << "Converted to: " << outputValue << endl;
        }

        else if (toMeasure == 'K' || toMeasure == 'k') {
            outputValue = (inputValue-32) * 5/9 + 273.15;
            cout << "Converted to: " << outputValue << endl;
        }

        else {
            cout << "Invalid Conversion.";
        }
    }

    else if (fromMeasure == 'K' || fromMeasure == 'k') {
        if (toMeasure == 'C' || toMeasure == 'c'){
            outputValue = inputValue-=273.15;
            cout << "Converted to: " << outputValue << endl;
        }

        else if (toMeasure == 'F' || toMeasure == 'f') {
            outputValue = (inputValue-273.15) * 9/5 + 32;
            cout << "Converted to: " << outputValue << endl;
        }

        else {
            cout << "Invalid Conversion.";
        }

    }


    return 0;

}