/*
Cassandra Sbordoni
May 29, 
lab4: string's method
*/
#include <iostream>     // Include input-output stream library

using namespace std;    // Use the standard namespace

int main(){
    cout<<"\n--------- example 1: character's value --------- "<<endl;
    char symbol = '&'; // ccode = 38 (char has to be in'') (prints the symbol bc declared as a char)
    cout<<"original symbol = "<<symbol<<endl;
    symbol += 3; // symbol = 38 + 3 = 41
    cout<<"updated symbol = "<<symbol<<endl; // because it is now 41 it changes the symbol to match the value of 41 from the ascii table.
    cout<<"\n--------- example 2:  --------- "<<endl;
    string username = "peterpan";
    cout<<"The third characteris = "<<username[2]<<endl; //one way to acces a character at desired index
    cout<<"The fifth character is = "<<username.at(4)<<endl; //another way
   
    cout<<"\n--------- example 3: string length --------- "<<endl;
    // length() returns the number of characters in a string
    int len_username = username.length(); 
    cout<<"username has "<<len_username<<" characters."<<endl;
    // finding the last character in a string using the length() method
    cout<<"The last character is = "<<username[len_username-1]<<endl;

    cout<<"\n--------- example 4: string concatenation, + --------- "<<endl;
    string country ="UK";
    // concatenate username and country
    string username_country = username+"@"+country+"@";
    cout<<"concatenated username and country = "<<username_country<<endl;

    cout<<"\n--------- example 5: subtracting characters --------- "<<endl;
    // subtract the word 'pan' from the username_country 
    string subs_word = username_country.substr(5,3);
    cout<<"The substracted word = "<<subs_word<<endl;
    
    cout<<"\n--------- example 6: inserting characters into a string --------- "<<endl;
    // insert the word 'from = ' after the first @ symbol
    username_country.insert(9, "from = ");
    cout<<"After insert method = "<<username_country<<endl;
    
    cout<<"\n--------- example 7: append characters into a string --------- "<<endl;
    //append year '2025'
    username_country.append("2025");
    cout<<"After append method = "<<username_country<<username_country<<endl;
    
    cout<<"\n--------- example 8: replacing characters within a string --------- "<<endl;
    // replace the word 'pan' with 'Jospeh'
    username_country.replace(5,3,"Joseph");
    cout<<"After replace method = "<<username_country<<endl;

    cout<<"\n--------- example 9: erase characters from a string --------- "<<endl;
    // erase the word 'er'
    username_country.erase(3,2);
    cout<<"After erase method = "<<username_country<<endl;

    cout<<"\n--------- example 10: find characters in a string --------- "<<endl;
    //find the index of 'ph'
    int find_ph = username_country.find("ph");
    cout<<"ph is in index = "<<find_ph<<endl;

    cout<<"\n---------------- LAB excersise ---------------- "<<endl;
    string new_word; // declare variable to store user input
    cout<<"Type a word: ";
    cin >> new_word; // get input from user

    //print the 4th character (index 3 since counting starts from 0)
    cout<<"The 4th character is: "<<new_word[3]<<endl;

    //print the length of the word using length() method
    int length = new_word.length();
    cout<<"The length of the word is: "<<length<<" characters."<<endl;

    //replace 3 characters starting from index 1 with "-- $ --"
    new_word.replace(1, 3, "-- $ --");
    cout<<"After replacement: "<<new_word<<endl;

    //remove 2 characters from the end using erase()
    new_word.erase(new_word.length() - 2, 2);
    cout<<"After removing two characters from the end: "<<new_word<<endl;

    cout<<"---------------------------------------------------------------------------"<<endl;


    return 0;
}
