/*
Cassandra Sbordoni
June 18, Lottery simulation
Homework 4
*/
#include<iostream>
using namespace std;

#include "homework4_functions.cpp"


int main(){
    int winning[LOTTERY_SIZE];
    int user[LOTTERY_SIZE];

    winningDigits(winning); //generate winning digits
    userTicket(user); // get user ticket

    if(!checkNoRepeats(winning)){
        cout<<"Error: Winning digits have repeats."<<endl;
    }
    if(!checkNoRepeats(user)){
        cout<<"Error: User ticket has repeats."<<endl;
    }

    int matchCount = checkWinner(winning, user);
    printResult(winning, user, matchCount);

    return 0;
}
