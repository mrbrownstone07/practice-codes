#include <iostream>
using namespace std;

class Student{
    private:
        int id;
        double cgpa;
        string name;

    public:
        Student();
        Student(int, double, string);
        bool operator == (Student);
        bool operator != (Student);
        bool operator > (Student);
        bool operator < (Student);
        double getCGPA();
        void print();
};

Student::Student(){}

Student::Student(int id, double cgpa, string name){
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

double Student::getCGPA(){
    return this->cgpa;
}

bool Student::operator== (Student otherStudent){
    return (this->cgpa == otherStudent.getCGPA());
}

bool Student::operator!= (Student otherStudent){
    return (this->cgpa != otherStudent.getCGPA());
}

bool Student::operator> (Student otherStudent){
    return (this->cgpa > otherStudent.getCGPA());
}

bool Student::operator< (Student otherStudent){
    return (this->cgpa < otherStudent.getCGPA());
}

void Student::print(){
    cout << this->name << "\n";
    cout << this->id << "\n";
    cout << this->cgpa << "\n";
}