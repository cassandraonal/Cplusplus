/*
Cassandra Sbordoni
June 18,
Homework 4, Lottery simulation
*/

#include<iostream>
#include<cstdlib> //for rand()
#include<ctime>  // for time()

using namespace std;

const int LOTTERY_SIZE = 5;
const int MIN_NUM = 1;
const int MAX_NUM = 19;

// Function 1: generate 5 random winning digits
void winningDigits(int winning[]){
    srand(time(0)); // seed random number generator
    int i = 0;
    while(i < LOTTERY_SIZE){
        int num = rand() % MAX_NUM + MIN_NUM; // 1 - 19
        bool duplicate = false;
        for(int j=0; j<i; j++){
            if(winning[j]==num){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            winning[i] = num;
            i++;
        }
    }
}

//function 2: ask user to enter 5 ticket numbers
void userTicket(int user[]){
    int i = 0;
    while(i<LOTTERY_SIZE){
        cout<<"Enter number "<<(i+1)<<" between 1 and 19: ";
        int num;
        cin>>num;

        if(num<MIN_NUM || num > MAX_NUM){
            cout<<"Invalid number. Try again.\n";
            continue;
        }
        bool duplicate = false;
        for(int j=0; j<i; j++){
            if(user[j]==num){
                duplicate = true;
                break;
            }
        }
        if(duplicate){
            cout<<"Duplicate number. Try again.\n";
        } else {
            user[i] = num;
            i++;
        }
    }
}
// fucntion 3: check if an array has duplicates
bool checkNoRepeats(int arr[]){
    for(int i=0; i<LOTTERY_SIZE; i++){
        for(int j = i+1; j<LOTTERY_SIZE; j++){
            if(arr[i]== arr[j]){
                return false;
            }
        }
    }
    return true;
}
// fucntion 4: compare arrays and count matching numbers
int checkWinner(int winning[], int user[]){
    int count = 0;
    for(int i=0; i<LOTTERY_SIZE; i++){
        for(int j = 0; j<LOTTERY_SIZE; j++){
            if(user[i]==winning[j]){
                count++;
                break;
            }
        }
    }
    return count;
}
//fucntion 5: Print the results
void printResult(int winning[], int user[], int matchCount){
    cout<<"\nWinning digits =\t";
    for(int i = 0; i<LOTTERY_SIZE; i++){
        cout<<winning[i]<<"\t";
    }
    cout<<"\nUser ticket =\t\t";
    for(int i=0; i<LOTTERY_SIZE; i++){
        cout<<user[i]<<"\t";
    }

    cout<<"\nMatch numbers =\t\t"<<matchCount<<endl;
}
