#include <iostream>

using namespace std;

int main () {
    const int MAX = 3;

    int var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++) {
   
        cout <<&var[i] << endl;
    }





/*     for (int i = 0; i < MAX; i++) {
        cout << "Value of ptr [" << i << "] = " << var[i] << endl;
        cout << "Value of ptr [" << i << "] = " << &var[i] << endl;
    } */
    return 0;
}