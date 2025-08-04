#include"Faculty.h"
#include<iostream>
using namespace std;

Faculty::Faculty():Person(), department(""), title(""), salary(0){} //Default constructor
Faculty::Faculty(string name, int id, string department, string title, int salary)// parameterized constructor
    : Person(name, id), department(department), title(title), salary(salary){}
//Getters for member functions
string Faculty::getDepartment() const{
    return department;
}
string Faculty::getTitle() const{
    return title;
}
int Faculty::getSalary() const{
    return salary;
}
//Setters
void Faculty::setDepartment(string department){
    this->department = department;
}
void Faculty::setTitle(string title){
    this->title = title;
}
void Faculty::setSalary(int salary){
    this->salary = salary;
}
void Faculty::display(){
    cout<<"Faculty - ID: "<<id
        <<", Name: "<<name
        <<", Dept: "<<department
        <<", Title: "<<title
        <<", Salary: $"<<salary<<endl;
}

void Faculty::updateDetails() {
    string department, title;
    int salary;

    cin.ignore(); //flush newline (added by Cassandra S.)
    cout << "Enter department: ";
    getline(cin, department);
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter salary: ";
    cin >> salary;
    setDepartment(department);
    setTitle(title);
    setSalary(salary);
}
