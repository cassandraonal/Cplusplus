#ifndef FACULTY_H
#define FACULTY_H
#include "Person.h"
#include<string>
using namespace std;

class Faculty : public Person{ // Faculty class (inherits from Person)
private:
    string department; //Department (e.g., "Science").
    string title; //Job title (e.g., "Professor").
    int salary; //Yearly salary (e.g., 75000).
public:
    Faculty(); //Default constructor Sets department and title to empty, salary to 0, calls Person default constructor.
    Faculty(string name, int id, string department, string title, int salary);// Parameterized constructor
//Getters
    string getDepartment() const;
    string getTitle() const;
    int getSalary() const;
//Setters
    void setDepartment(string department);
    void setTitle(string title);
    void setSalary(int salary);

    void display() override; // Overrides to print faculty info (e.g.,"Faculty - ID: 201, Name: Dr. Smith, Dept: Math, Title: Professor, Salary: $80000").

    void updateDetails();

};
#endif