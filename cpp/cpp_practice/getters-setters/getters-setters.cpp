#include <iostream>

using namespace std;

class Student {
    private:
        int gradeLevel;
        string name;
        float generalAverage;
    public: 

    Student(string name, int gradeLevel,float generalAverage ) {
        this -> name = name;
        this -> gradeLevel = gradeLevel;
        this -> generalAverage = generalAverage;
        

    }

    int getGradeLevel() {
        return gradeLevel;
    }

    void setGradeLevel(int agradeLevel) {
        if (agradeLevel > 10) {
            cout << "Invalid level" << endl;
        }
        else {
            this -> gradeLevel = agradeLevel;
            cout << "You entered Grade " << agradeLevel << endl;
        }
    }
    void setName(string setName) {
        if (setName == "Kenneth") {
            cout << "You can't enter that." << endl;
        }
        else {
            this -> name = setName;
            cout << "Hi " << setName << endl;
        }
    }
    void setGenAve(float setGenAve) {
        if ( setGenAve == 0) {
            cout << "Your general average can not be 0" << endl;
        }
        else {
            this -> generalAverage = setGenAve;
            cout << "Your General Average is " << setGenAve << endl;
        }
    }
};

class LazyStudent : public



int main (){
    Student student1("Isabelle",7, 98.75);
    student1.setGradeLevel(12);
    student1.setGenAve(0);
    student1.setName("Kenneth");
    cout << endl;

}

