/*
Cassandra Sbordoni
Lab 1, input and output stream
May 27, 2025
*/
#include<iostream>
using namespace std;
//loading function
int main(){
    cout<<"\n------ Example 1: cout and endl ------"<<endl;
    cout<<"Hello World!"<<endl;
    cout<<"Cassandra Sbordoni\n";
    cout<<"\tWelcome to C++";

    cout<<"\n------ Example 2: string and char variables, cin ------"<<endl;
    string lastname; //declare variable
    string firstname = "Peter"; //declare and initialized a variable
    cout<<"User first name = "<<firstname<<endl;
    firstname = "Anna"; //update the value of variable 'firstname'
    cout<<"Update name = "<<firstname<<endl;
    
    //collect last name
    cout<<"Enter a last name ";
    cin>>lastname;

    // prompt the collected last name
    cout<<"The collected last name = "<<lastname<<endl;
    
    cout<<"\n------ Example 3: char variables ------"<<endl;
    // declare variable
    char symbol;
    // declare and initialized a char variable
    char character = '@'; //characters in single quotes only string use double quotes
    // collect a symbol
    cout<<"Enter a symbol: ";
    cin>>symbol;

    //prompt result
    cout<<"Symbol = "<<symbol<<"\nCharacter = "<<character<<endl;

    cout<<"\n------ LAB Excersize ------"<<endl;
    string country;
    char gender;

    cout<<"Enter a country: ";
    cin>>country;
    cout<<"Enter a gender f for female, m for male, o for others: ";
    cin>>gender;

    cout<<"Entered country: "<<country<<"\t"<<endl;
    cout<<"Selected gender: "<<gender<<"\t"<<endl;


    return 0;
}
