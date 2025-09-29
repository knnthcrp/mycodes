#include <iostream>

using namespace std;

class Student {
    public: 
        string name;
        int gradeLevel;
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
};



int main (){
    Student student1("Isabelle",7, 98.75);
    Student student2("Kaiser",7, 95.5);
    Student student3("Tim",7, 90.75);

    cout << student1.introduceUrSelf();
    cout << student2.introduceUrSelf();
    cout << student3.introduceUrSelf();
}

