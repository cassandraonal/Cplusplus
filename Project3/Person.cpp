#include "Person.h"

Person::Person():name(""), id(0){} //default constructor initializes name to empty string and id to 0
Person::Person(string name, int id): name(name), id(id){} // Param constructor Initializes name and id with given values
Person::~Person(){} //Virtual destructor Allows proper cleanup of derived class objects
//Getter for name
string Person::getName() const{
    return name;
}

// Getter for id
int Person::getID() const{
    return id;
}

void Person:: setName(string n){
    name = n;
};