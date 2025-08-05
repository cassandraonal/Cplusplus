#include "LinkedList.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm> //needed for tranform
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
    while (current && current->data->getID() != id) {
        prev = current;
        current = current->next;
    }
    if (!current) {
        cout <<"Not found.\n";
        return;
    }
    if (!prev) {
        head = current->next;
    } else {
        prev->next = current->next;
    }
    delete current->data;
    delete current;
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
    insert(new Student(name, id, major, gpa));
}

void LinkedList::addStudentsFromTxtFile(const string& filename) {
      ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Failed to open file: " << filename << endl;
        return;
    }

    string line;
    while (getline(infile, line)) {
        stringstream ss(line);
        int id;
        ss >> id;
        vector<string> tokens;
        string word;
        while (ss >> word) {
            tokens.push_back(word);
        }
        if (tokens.size() < 3) continue; 
        string major = tokens[tokens.size() - 2];
        double gpa = stod(tokens[tokens.size() - 1]);
        string name;
        for (size_t i = 0; i < tokens.size() - 2; ++i) {
            if (i > 0) name += " ";
            name += tokens[i];
        }
        insert(new Student(name, id, major, gpa));
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
        stringstream ss(line);
        string idStr, name, major, gpaStr;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, major, ',');
        getline(ss, gpaStr, ',');

        int id = stoi(idStr);
        double gpa = stod(gpaStr);

        insert(new Student(name, id, major, gpa));
    }
    infile.close();
}

void LinkedList::addFacultyFromConsole(){
    int id, salary;
    string name, dept, title;
    cout << "Enter ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter department: ";
    getline(cin, dept);
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter salary: ";
    cin >> salary;
    insert(new Faculty(name, id, dept, title, salary));
}

void LinkedList::addFacultyFromTxtFile(const string& filename){
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Failed to open file: " << filename << endl;
        return;
    }

    string line;
    while (getline(infile, line)) {
        stringstream ss(line);
        int id;
        ss >> id;

        vector<string> tokens;
        string word;
        while (ss >> word) {
            tokens.push_back(word);
        }

        if (tokens.size() < 4) continue; // Need at least name, dept, title, salary

        // Last three tokens are department, title, salary
        string department = tokens[tokens.size() - 3];
        string title = tokens[tokens.size() - 2];
        int salary = stoi(tokens[tokens.size() - 1]);

        // Everything before that is part of the name
        string name;
        for (size_t i = 0; i < tokens.size() - 3; ++i) {
            if (i > 0) name += " ";
            name += tokens[i];
        }

        insert(new Faculty(name, id, department, title, salary));
    }

    infile.close();
}
void LinkedList::addFacultyFromCSVFile(const string& filename){
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Failed to open file: " << filename << endl;
        return;
    }
    string line;
    while (getline(infile, line)) {
        stringstream ss(line);
        string idStr, name, department, title, salaryStr;
        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, department, ',');
        getline(ss, title, ',');
        getline(ss, salaryStr, ',');
        insert(new Faculty(name, stoi(idStr), department, title, stoi(salaryStr)));
    }
    infile.close();
}
// Step 8: Sort by ID
void LinkedList::sortByID() {
    if(! head || !head->next) return;
    bool swapped;
    do{
        swapped = false;
        ListNode<Person*>* current = head;
        while(current->next){
            if(current->data->getID()>current->next->data->getID()){
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    }while(swapped);
    cout<<"List sorted by ID:\n";
    display();
}
string toLower(const string& s){
   string lower;
   for(char c : s) lower += tolower(c);
   return lower;
   
}
// Step 8: Sort by Name
void LinkedList::sortByName() {
    if(!head || !head->next) return;
    bool swapped;
    do{
        swapped = false;
        ListNode<Person*>* current = head;
        while(current->next){
            string name1 = toLower(current->data->getName()); //used to get in alpha order regardless lowercase or uppercase
            string name2 = toLower(current->next->data->getName());

            if(name1 > name2){
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    }while(swapped);
    cout<<"List sorted by Name:\n";
    display();
}

// Step 8: Sort by GPA (Students only)
void LinkedList::sortByGPA() { 
   if(!head || !head->next) return;
   bool swapped;
   do{
        swapped = false;
        ListNode<Person*>* current = head;
        while(current->next){
            Student* s1 = dynamic_cast<Student*>(current->data);
            Student* s2 = dynamic_cast<Student*>(current->next->data);
            if(s1 && s2 && s1->getGPA() < s2->getGPA()){
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
   }while(swapped);
   cout<<"Students sorted by GPA:\n";
   ListNode<Person*>* current = head;
   while(current){
    Student* s = dynamic_cast<Student*>(current->data);
    if(s) s->display();
    current = current->next;
   }
}