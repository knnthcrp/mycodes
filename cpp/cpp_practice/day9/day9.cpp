#include <iostream>

using namespace std;

int main () {
    string name = "Kenneth";

    string* pName = &name;

    cout << *pName;
}