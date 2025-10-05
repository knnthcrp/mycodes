#include <iostream>

using namespace std;

class Animal {
    public:
        string size;
        bool canWalk;
        bool loud;

        void sound() {
            cout << "I make arf sound" << endl ;
        }
    };
class Dog : public Animal {
    public:

        
};
class CuteDog : public Animal {
    public:
        void sound() {
            cout << "I make cute arf sound" << endl;
        }
};


int main() {
    Animal dog;
    dog.sound();

    Dog Aspin;
    Aspin.sound();

    CuteDog chihuahua;
    chihuahua.sound();

    return 0;
}