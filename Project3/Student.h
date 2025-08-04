#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include<string>
using namespace std;

class Student : public Person{ // Student class inherits from Person
private:
    string major; // field of study(e.g., "Computer Science")
    double gpa; // grade point avrg(e.g., 3.5)
public:
    Student(); // default constructor  Sets major to empty, gpa to 0.0, calls Person default constructor.
    Student(string name, int id, string major, double gpa); // parameterized constructor.
// getters
    string getMajor() const;
    double getGPA() const;
// setters
    void setMajor(string major);
    void setGPA(double gpa);
     // set name and id are done in the Person constructor
    void display() override; //override to print student info (e.g., "Student - ID: 101, Name: Jane, Major: Math, GPA: 3.8").
    void updateDetails() override;
};

#endif