#include "LinkedList.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    // starts from first node in the list
    ListNode<Person*>* current = head;
    while (current) {
        ListNode<Person*>* temp = current; //looops through very node until the end is reached
        current = current->next;//stores current node in a temp value
        delete temp->data;//avoid memory leak - moving to the next node before delting the next one
        delete temp;
    }
}

void LinkedList::insert(Person* data) { //points to base class for student or faculty
    ListNode<Person*>* newNode = new ListNode<Person*>(data); //dynmically create new node that stores the data from the person
    if (!head) { 
        head = newNode;
    } else {
        // else the go through the list 
        ListNode<Person*>* current = head;
        while (current->next) current = current->next;
        current->next = newNode;// sets next pointer to the new node
    }
}

void LinkedList::display() {
    ListNode<Person*>* current = head;
    while (current) {
        current->data->display();  //this calls Faculty::display() or Student::display()
        cout << "------------------\n";
        current = current->next;
    }
}


Person* LinkedList::search(int id) {
    ListNode<Person*>* current = head;
    while (current) {
        if (current->data->getID() == id) return current->data;
        current = current->next;
    }
    return nullptr;
}

Person* LinkedList::search(string firstName, string lastName) {
    string fullName = firstName + " " + lastName;
    ListNode<Person*>* current = head;
    while (current) {
        if (current->data->getName() == fullName) return current->data;
        current = current->next;
    }
    return nullptr;
}

void LinkedList::update(int id) {
    Person* p = search(id);
    if (!p) {
        cout << "No record found.\n";
        return;
    }
    p->updateDetails();
}

void LinkedList::remove(int id) {
    ListNode<Person*>* current = head;
    ListNode<Person*>* prev = nullptr;

    while (current != nullptr && current->data->getID() != id) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Person with ID " << id << " not found.\n";
        return;
    }

    if (prev == nullptr) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    delete current->data;
    delete current;

    cout << "Person with ID " << id << " has been removed.\n";
}

void LinkedList::addStudentFromConsole() {
    int id;
    string name, major;
    double gpa;

    cout << "Enter student ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter major: ";
    getline(cin, major);
    cout << "Enter GPA: ";
    cin >> gpa;

    Student* student = new Student(name, id, major, gpa);
    insert(student);
}

void LinkedList::addStudentsFromTxtFile(const string& filename) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Failed to open file: " << filename << endl;
        return;
    }
    int id;
    string name, major;
    double gpa;
    while (infile >> id >> name >> major >> gpa) {
        Student* student = new Student(name, id, major, gpa);
        insert(student);
    }
    infile.close();
}

void LinkedList::addStudentsFromCSVFile(const string& filename) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Failed to open file: " << filename << endl;
        return;
    }
    string line;
    while (getline(infile, line)) {
        //split CSV lines by commas
        stringstream ss(line);
        string idStr, name, major, gpaStr;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, major, ',');
        getline(ss, gpaStr, ',');

        int id = stoi(idStr);
        double gpa = stod(gpaStr);

        Student* student = new Student(name, id, major, gpa);
        insert(student);
    }
    infile.close();
}
// Step 8: Sort by ID
void LinkedList::sortByID() {
    vector<Person*> people;
    ListNode<Person*>* current = head;

    while(current){
        people.push_back(current->data);
        current = current->next;
    }

    sort(people.begin(), people.end(), [](Person* a, Person* b) {
        return a->getID() < b->getID();
    });

    // delete all old nodes, but not the Person objects
    current = head;
    while(current){
        ListNode<Person*>* temp = current;
        current = current->next;
        delete temp;
    }

    head = nullptr;
    for(Person* p : people){
        ListNode<Person*>* newNode = new ListNode<Person*>(p);
        if(!head)
            head = newNode;
        else{
            ListNode<Person*>* tail = head;
            while(tail->next) tail = tail->next;
            tail->next = newNode;
        }
    }

    cout << "List sorted by ID.\n";

    // Show the sorted list immediately
    display();
}

// Step 8: Sort by Name
void LinkedList::sortByName() {
    vector<Person*> people;
    ListNode<Person*>* current = head;

    while (current) {
        people.push_back(current->data);
        current = current->next;
    }

    sort(people.begin(), people.end(), [](Person* a, Person* b) {
        return a->getName() < b->getName();
    });

    // Delete old list nodes (not Person* objects)
    current = head;
    while (current) {
        ListNode<Person*>* temp = current;
        current = current->next;
        delete temp;
    }

    head = nullptr;
    for (Person* p : people) {
        ListNode<Person*>* newNode = new ListNode<Person*>(p);
        if (!head)
            head = newNode;
        else {
            ListNode<Person*>* tail = head;
            while (tail->next)
                tail = tail->next;
            tail->next = newNode;
        }
    }

    cout << "List sorted by name.\n";

    // Immediately display the sorted list
    display();
}

// Step 8: Sort by GPA (Students only)
void LinkedList::sortByGPA() {
    vector<Student*> students;
    ListNode<Person*>* current = head;
 
