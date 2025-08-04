/*
Cassandra Sbordoni
June 2, 2025
lab 6: switch-case statement
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"--------- Example 1: switch-case ---------"<<endl;
    //switch-case to pick a day. The day is selected by number
    // declare variables
    int day;
    string dayoff="";
    // collect the day
    cout<<"Pick a day off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cin>>day;
    // switch-case statement
    switch(day)
    {
    case 1:
        dayoff ="Monday";
        break;
    case 2:
        dayoff = "Tuesday";
        break;
    case 3:
        dayoff = "Wednesday";
        break;
    case 4:
        dayoff = "Thursday";
        break;
    case 5:
        dayoff = "Friday";
        break;
    default:
        dayoff = "undefined!";
        break;
    }

    // prompt result
    cout<<"Your day-off is = "<<dayoff<<endl;
    
    cout<<"--------- Example 2: switch-case ---------"<<endl;
    // use switch-case statement to select a gender. Gender is selected with a character
    // declare variables
    char gender;
    string selectedgender ="";
    //collect a gender
    cout<<"Pick a gender: "<<endl;
    cout<<"Enter m or M for male"<<endl;
    cout<<"Enter f or F for female"<<endl;
    cout<<"Enter o or O for other"<<endl;
    cin>>gender;
    //switch-case
    switch(gender)
    {
    case 'm': case 'M': //two cases give the same result so written like this in one line
        selectedgender = "MALE";
        break;
    case 'f': case 'F':
        selectedgender = "FEMALE";
        break;
    case 'o': case 'O':
        selectedgender = "OTHER";
        break;
    default:
        selectedgender = "UNDEFINED";
        break;
    }

    //prompt result
    cout<<"Picked gender = "<<selectedgender<<endl;
    
    cout<<"--------- LAB excersise ---------"<<endl;
    // declare variables
    int number;
    char doublenumber;
    //collect response
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Do you want to double the number "<<number<<"?"<<endl;
    cout<<"Enter Y or y for yes, or n or N for No = ";
    cin>>doublenumber;
   
    //switch-case
    switch(doublenumber)
    {
    case 'Y': case 'y':
        number *= 2;
        break;
    case 'N': case 'n':
        break;
    default:
        number = 0;
        break;
    }

    //prompt the result
    cout<<"The number is set to = "<<number<<endl;

    return 0;
}
