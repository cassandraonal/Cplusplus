/*
Cassandra Sbordoni
June 17,
console failure and io files
*/
#include<iostream>
#include<fstream>


using namespace std;

#include "lab13_functions.cpp"

int main(){
    cout<<"\n------ Example 1: console failure -----"<<endl;
    checknumber();
    // recollect num
    checknumber();

    cout<<"\n------ Example 2: console failure to return a validated a number -----"<<endl;
    float number = validatenumber();
    cout<<"Validated number = "<<number<<endl;

    cout<<"\n------ Example 3: read a file -----"<<endl;
    string fn = "testing.txt";
    readfile(fn);

    cout<<"\n------ Example 4: write in a file -----"<<endl;
    fn = "emailaddresses.txt";
    writefile(fn);

    cout<<"\n------ Example 5: append data into an existing file -----"<<endl;
    fn = "samplefile.txt";
    appendfile(fn);

    cout<<"\n------ Example 6: check if a file exists -----"<<endl;
    fn = "testing.txt";
    cout<<"Does file "<<fn<<" exist? = "<<checkfile(fn)<<endl;
    
    cout<<"\n------ Lab Exercise 1: function that perform +, -, *, /, and modulous operation -----"<<endl;
    float x, y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;

    float result = calculate(x,y);
    cout<<"Result = "<<result<<endl;

    cout<<"\n------ Lab Exercise 2: create and write new txt file -----"<<endl;
    createUserFile();
    
    cout<<"\n------ Lab Exercise 2: append text to the existing file -----"<<endl;
    string message;
    cin.ignore(10000, '\n'); // clear leftover input
    cout<<"Enter a message to append: ";
    getline(cin, message);
    appendUserMessage(message);

    cout<<"\n------ Lab Exercise 2: create a new file and overwrite text in new file -----"<<endl;
    string filename, text;
    cout<<"Enter the new filename: ";
    cin>>filename;
    cin.ignore(10000, '\n'); // clear leftover input
    cout<<"Enter text to write into new file: ";
    getline(cin, text);
    overwriteFile(filename, text);



    return 0;
}
