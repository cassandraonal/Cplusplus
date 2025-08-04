/*
Cassandra Sbordoni
June 4, 2025
intro functions
*/
#include<iostream>

using namespace std;


// example 1: function that doesn't return a value
void print_hi(){
    cout<<"Good afternoon"<<endl;
    return; // 'return' is optional for a viod function
}

// example 2: function that has parameter
void greeting(string name){
    cout<<"Welcome to function "<<name<<endl;
}

// example 3: function with return value
string tired(bool a){
    if(a){
        return "yes";
    }
    else{
        return "no";
    }
}

void print_tired(string b){
    cout<<"Are you tired today? "<<b<<endl;
}

// example 4: function to calculate the area of a rectangle
double area_rectangle(double length, double width){
    return length*width;
}
// prompt result
void print_area(double length, double width, double area){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"A rectangle with length "<<length<<" and width = "<<width<<" has an area of "<<area<<endl;
}

// example 5: calculate a Faherenheit temperature using a Celsius. Celsius will be passed to the function
float fah(float celsius){
    return celsius*1.8 + 32; 
    //anything after the first return will not run. 'return' terminates the function 
    celsius +=100; //will not run (skipped)
    return celsius;//will not run 
}

// print the result
void print_temp(float c, float f){
    cout<<c<<"C is equivalent to "<<f<<"F"<<endl;
}

// example 6: function to print if a number is positive, negitive, or zero.
void check_num(int num){
    if(num>0){
        cout<<num<<" is positive"<<endl;
    }
    else if(num<0){
        cout<<num<<" is negitive"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }
}

// example 7: local variable
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum; // 'sum' is a local variable of function 'add'
}

// example 8: global variable
void update_number(){
    // update the gloabal variable 'number'
    number *= 2;
    cout<<"Updated number = "<<number<<endl;
}

// LAB Excersise:
// function 1: collect number between 1 and 10
int collected_num(){
    int num;
    do{
        cout<<"Enter a number between 1 and 10: ";
        cin>>num;
        if(num < 1 || num > 10 ){
            cout<<"Invalid! Try again.\n";
        }
    } while(num < 1 || num > 10);
    return num;
}
// function 2: print number from the collected number (function 1) up to 15, step 1
void print_to_15(int start){
    cout<<"Counting from "<<start<<" up to 15: "<<endl;
    for(int i = start; i <= 15; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
// function 3: count the amount of numbers, from the collected number (function 1) up to 15, that are not multiple of 3.
int count_not_multiple_of_3(int start){
    int count = 0;
    for(int i = start; i <= 15; i++){
        if(i %3 != 0){
            count++;
        }
    }
    return count;
}
// function 4: prompt result
void print_final_result(int start, int count){
    cout<<"From "<<start<<" up to 15, there are "<<count<<" numbers that are not multiples of 3."<<endl;
}
