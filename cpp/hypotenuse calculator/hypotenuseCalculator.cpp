#include <iostream>
#include <cmath>

using namespace std;

int main () {

    double a, b, c;

    cout << "Enter the length of the first side:";
    cin >> a;

    cout << "Enter the length of the second side:";
    cin >> b;


    c= pow(a,2) + pow(b,2);

    sqrt(c);

    cout << "The hypotenuse is: " << c << endl;





    return 0;
}