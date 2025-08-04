/* 
Cassandra Sbordoni
Homework 2: Loops mechanism
*/
#include<iostream>

using namespace std;
int main(){
    cout<<"---------------- Question 1 ----------------"<<endl;
    int number;
    do{
        cout<<"Enter a number greater than or equal to 10: ";
        cin>>number;

        if(number < 10){
            cout<<number<<" is invalid. ";
        }
    } while(number <10);
    cout<<number<<" is a valid number!"<<endl;

    cout<<"---------------- Question 2 ----------------"<<endl;
    int num1, num2;
    int min, max;
    
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1 < num2){
        min = num1;
        max = num2;
    }else{
        min = num2;
        max = num1;
    }
    cout<<"RESULT = ";
    while(min <=max){
        cout<<min<<"  ";
        min++;
    }
    cout<<endl;

    cout<<"---------------- Question 3 ----------------"<<endl;

    int size = 9;

    for(int row = 1; row <= size; row++){
        for(int col = 1; col <= size; col++){
            if((col == 3 || col == 7) && (row >=4 && row <= 5)){
                cout<<" % ";
            }
            else if((col == 4 || col == 6 )&& (row >=3 && row <= 6)){
                cout<<" % ";
            }
            else if((col == 5) && (row >=5 && row <= 7)){
                cout<<" % ";
            }
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }

    return 0;
}
