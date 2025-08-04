//Casssandra Sbordoni
//Monday, June 9 and 10, 2025
//lab 10, predifined functions, recursive function
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>
using namespace std;

// example 1:calculate the hypotenusa of a right angle
// function to collect a number
float side(){
    int s;
    cout<<"Enter a positive number: ";
    cin>>s;
    while(s<=0){
        cout<<"Invalid! Enter a positive number: ";
        cin>>s;
    }
    return s;
}
// function that calculate the hypotenusa
// hyp = square_root(side1^2 + side2^2)
float hyp(float side1, float side2){
    return sqrt(pow(side1,2)+ pow(side2,2)); //pow(pass the base, power amount)
}
// function to print result
void print_result(float side1, float side2, float hyp){
    cout<<"The hypotenusa of a right angle with sides "<<side1<<" and "<<side2<<" is "<<hyp<<endl;
}

//example 2: random_number generator
int random_number(){
    // set different seed for rand()
    srand(time(0));
    return rand(); // ran() by default uses one seed 
}

//example 3: generate between -5 and 5
int random_five(){
    // set different seed for rand()
    srand(time(0));
    return (-5 + rand()%11);
}

//example 4: recursive function
void cheer(int n){
    if(n<=1){
        cout<<"STOP"<<endl;
    }
    else{
        cout<<(n*2)<<"\t";
        cheer(n-1);
    }
}
/* TABLE OF ANALYSIS
function    |   int n   |   if(n<=1)    |              else
iteration   |           | true or false |cout<<(n*2)    |   cheer(n-1);
---------------------------------------------------------------------------
    1       |   n=5     | if(5<=1)false | 5*2 = 10      |  cheer(5-1 =4)
----------------------------------------------------------------------------
    2       |   n=4     | if(4<=1)false | 4*2 = 8       | cheer(4-1=3)
-----------------------------------------------------------------------------
    3       |   n=3     |  if(3<=1)false|  3*2= 6       |  cheer(3-1=2)
-----------------------------------------------------------------------------
    4       |   n=2     |  if(2<=1)false| 2*2= 4        | cheer(2-1=1)
------------------------------------------------------------------------------
    5       | n= 1      | if(1<=1)True (STOP)

Terminal prompt --> 10  8   6   4   STOP
*/

//example 5: factorial sequence
int factorial(int n){
    if(n != 1){ // 1 is the end of the factorial
        return (n*factorial(n-1)); 
    }
    else{
        return 1;
    }
}
/* TABLE ANALYSIS
function    |           | if(n!=1)                              |   else
iteration   |   int n   | return (n*factorial(n-1))             |   return 1
------------------------------------------------------------------
    1       | n=4       |true, return(4*factorial(4-1=3))       | skip
-------------------------------------------------------------------------
    2       | n=3       |true, (4*return(3*factorial(3-1=2)))   | skip
--------------------------------------------------------------------------
    3       | n=2       |true, (4*3*return(2*factorial(2-1=1))) | skip
-----------------------------------------------------------------------------
    4       | n=1       |false, (stop the recursive)            | return 1
------------------------------------------------------------------------------
int f = factorial(4); --> 4*3*2*1 = 24

cout<<"The final answer = "<<f<<endl; --> The final answer = 24

*/

//example 6: linear recursive function
int linearfunction(int m){ //m is your int, your number 
    if(m>10){
        return -6;
    }
    else{//(part of recursive function) * (m, just a number you keep and pass down in iteration. )
        return (linearfunction(m+2) *(m-4));
    }
}
/* TABLE ANAYLSIS
function    |           |  if(m>10)     | else
iteration   | in m      |  return -6    | return (linearfunction(m+2) *(m-4))
------------------------------------------------------------------------------
    1       | m=3       | false         | linearfunction(3+2=5)*(3-4=-1)
-------------------------------------------------------------------------------
    2       | m=5       | false         | (linearfunction(5+2=7) *(5-4=1))*(-1)
---------------------------------------------------------------------------------
    3       | m=7       | false         |(linearfunction(7+2=9) *(7-4=3))*(1)*(-1)
------------------------------------------------------------------------------------
    4       | m=9       | false         |(linearfunction(9+2=11) *(9-4=5))*(3)*(1)*(-1)
----------------------------------------------------------------------------------------
    5       | m=11      | true, return -6 (stop the recursive function)

    int r = linearfunction(3); -->(-6)*(5)*(3)*(1)*(-1) = 90
    cout<<"Total linear function = "<<r<<endl; --> Total linear function = 90
*/

// LAB Excersise:
// part a
// Function 1: Generate random time between 1 and 100
int generate_random_time(){
    srand(time(0)); //seed the random number generator
    return rand()%101; // generates a number from 1-100
}
// Function 2: Calculate falling distance using formula
float calc_distance(int time){
    return 0.5*gravity*pow(time,2);
}
// Function 3: Print the result
void print_falling_result(int time, float distance){
    cout<<"The falling distance in "<<time<<" seconds is "<<distance<<" meters."<<endl;
}

//LAB EXcersise:
// part b
// Function 
int mystery(int n){
    if (n<=1){
        return 1;
    }
    else{
        return (mystery(n-1)+n*2);
    }
}
/* TABLE OF ANALYSIS
function    |           | if(n<=1)  |  else
iteration   | int n     | return 1  | return (mystery(n-1)+(n*2))
-------------------------------------------------------------------
    1       | n=5       | false     | mystery(5-1=4)+(5*2=10)
---------------------------------------------------------------------
    2       | n=4       | false     | mystery(4-1=3)+(4*2=8)+(10)
----------------------------------------------------------------------
    3       | n=3       | false     | mystery(3-1=2)+(3*2=6)+(8)+(10)
------------------------------------------------------------------------
    4       | n=2       | false     | mystery(2-1=1)+(2*2=4)1+(6)+(8)+(10)
---------------------------------------------------------------------------
    5       | n=1       | true, return 1 (stop the recursive function)
-----------------------------------------------------------------------------
cout<<"Result = "<<mystery(5)<<endl; in terminal should look like this ---> Result = 29
Result = 1+4+6+8+10 = 29
*/

