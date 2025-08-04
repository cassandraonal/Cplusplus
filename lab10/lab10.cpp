/*
Casssandra Sbordoni
Monday, June 9 and 10, 2025
lab 10, predifined functions, recursive function
*/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

// part a of lab excersise
const float gravity = 9.8;

#include "lab10_functions.cpp"

int main(){
    cout<<"\n------ example 1: calculate the hypotenusa of a right angle-------"<<endl;
    float side1 = side();
    float side2 = side();
    float cal_hyp = hyp(side1, side2);
    print_result(side1,side2, cal_hyp);

    cout<<"\n------ example 2: random number-------"<<endl;
    int random = random_number();
    cout<<"random number generated = "<<random<<endl;

    cout<<"\n------ example 3: random number between -5 and 5 -------"<<endl;
    int rand5 = random_five();
    cout<<"random number = "<<rand5<<endl;
    
    cout<<"\n------ example 4: recursive function -------"<<endl;    
    cheer(5);

    cout<<"\n------ example 5: factorial sequence -------"<<endl;    
    int f = factorial(4);
    cout<<"The final answer = "<<f<<endl;

    cout<<"\n------ example 6: linear recursive function -------"<<endl;  
    int r = linearfunction(3);
    cout<<"Total linear function = "<<r<<endl;

    cout<<"\n------ LAB excersise, Part a -------"<<endl;
    int time = generate_random_time();
    float distance = calc_distance(time);
    print_falling_result(time, distance);
    
    cout<<"\n----LAB Exercise B ------"<<endl;
    cout<<"Result = "<<mystery(5)<<endl;
    return 0;
}
