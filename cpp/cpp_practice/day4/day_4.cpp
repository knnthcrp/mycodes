#include <iostream>
#include <string>

using namespace std;

int main () {

/*     string name = "ok";
    int haba;

    cout << name.length(); */

    string name = "Kenneth Carpo";
    int index;
    int indRemove;

/*     cout << "Enter your name: ";
    getline(cin, name); */
    // cout <<  name.find (' '); 
    index = name.find (' ');
    name.erase (index, 1);
    cout << name;



    return 0;
}