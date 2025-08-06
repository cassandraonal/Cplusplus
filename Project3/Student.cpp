#include "Student.h"
#include<iostream>
using namespace std;

Student::Student():Person(),major(""), gpa(0.0){} //Default
Student::Student(string name, int id, string major, double gpa) //parameterized constructor
    : Person(name, id), major(major), gpa(gpa){}
//getters
string Student::getMajor() const{ 
    return major;
}
double Student::getGPA() const{
    return gpa;
}
//setters
void Student::setMajor(string major){
    this->major = major;
}
void Student::setGPA(double gpa){
    this->gpa = gpa; // makes sure the class's member variable is updated.
}
//display student info
void Student::display(){
    cout<<"Student - ID: "<<id
        <<", Name: "<<name  
        <<", Major: "<<major
        <<", GPA: "<<gpa<<endl;
}

void Student::updateDetails() {
    cin.ignore();
    cout << "Enter major: ";
    getline(cin, major);
    cout << "Enter GPA: ";
    cin >> gpa;
}
