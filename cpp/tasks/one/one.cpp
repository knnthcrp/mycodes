#include <iostream>
#include <string>
using namespace std;

int main() {
    string c = "KENNETH";

    for (char &ch : c) {
        ch = tolower(ch);
    }

    cout << c << endl;

    return 0;
}
