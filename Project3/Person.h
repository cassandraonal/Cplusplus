#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person{ //base class
protected:
    string name; //member variables
    int id;
public:
    Person(); //default constructor
    Person(string name, int id); //Parameterized constructor
    virtual void display()=0; //Pure virtual function to show details (overridden by child classes).
    virtual ~Person(); // Virtual destructor to ensure proper cleanup of derived objects.
    
    string getName() const;
    int getID() const; // so i dont have to keep calling these in the other files.

    void setName(string n);
    virtual void updateDetails() = 0; //dynamically update details

};
#endif