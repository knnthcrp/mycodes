#include <iostream>

using namespace std;

class Student {
    private:
        int gradeLevel;
    public: 
        string name;
        float generalAverage;

    Student(string name, int gradeLevel,float generalAverage ) {
        this -> name = name;
        this -> gradeLevel = gradeLevel;
        this -> generalAverage = generalAverage;
        
        cout << "Student Registered." << endl ;

    }

    string getHonors() {
    if (generalAverage >= 98) return "With Highest Honors.";
    else if (generalAverage >=95) return "With High Honors";
    else if (generalAverage >= 90) return "With Honors";
    else return "No award";
}

    string introduceUrSelf() {
        cout << "I am " << name  <<", from Grade 7 and I am "
        << getHonors() <<  " with the grade of " <<  generalAverage;
    }

    int getGradeLevel() {
        return gradeLevel;
    }

    void setGradeLevel(int agradeLevel) {
        if (agradeLevel > 10) {
            cout << "Invalid level";
        }
        else {
            this -> gradeLevel = agradeLevel;
        }
    }
};



int main (){
    Student student1("Isabelle",7, 98.75);
    Student student2("Kaiser",7, 95.5);
    Student student3("Tim",7, 90.75);

    student1.setGradeLevel(12);
    cout << student1.getGradeLevel();

}

