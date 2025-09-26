#include <iostream>

using namespace std;

void sort (int array [], int size); 

int main () {
    int array [] = {10, 8, 2, 3, 1, 5, 6, 4, 7, 9};
    int size = sizeof(array)/sizeof(array[0]);

    sort (array, size);

    for (int element : array) {
        cout << element << " ";
    }
}

void sort (int array [], int size) {

    int temp;

    for (int i = 0; i < size  - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
    }

    }

}