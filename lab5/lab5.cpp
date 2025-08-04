/*
Cassandra Sbordoni  
May 29, 2025 
Lab 5: conditional statement 
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n--------- Example 1: bool variable ----------"<<endl;
    //declare the variables
    bool check_positive;
    int number;
    //collect a number
    cout<<"Enter a number: ";
    cin>>number;
    //check if the number is positive
    check_positive = number>0; // return 0(false) or 1(true)
    // prompt result
    cout<<"Is "<<number<<" positive?    "<<check_positive<<endl;
    
    cout<<"\n--------- Example 2: if statement ----------"<<endl;
    // check if 'number' is greater than or equal to 10. If the number is greater than 10, then increment 1
    if(number>=10){ // one line can omit the {'s, here just to show habbit to use it reccomended if there are multiple lines, same goes for else block
        number ++; // incriment number by one. EX: (10 --> 11) or (20 --> 21)
    }
    cout<<"Number = "<<number<<endl;
    
    cout<<"\n--------- Example 3: if-else statement ----------"<<endl;
    // check if a number is even or odd
    if(number%2 == 0){
        cout<<number<<" is even!"<<endl;
    }
    else{
        cout<<number<<" is odd!"<<endl;
    }

    cout<<"\n--------- Example 4: if-else statement for absolute value ----------"<<endl;
    // convert a number into an absolute value
    if(number<0){
        number *= -1; //number = number * -1
        cout<<"The absolute number is = "<<number<<endl;
    }
    else{
        cout<<"The number is positive = "<<number<<endl;
    }

    cout<<"\n--------- Example 5: multiway conditional statement ----------"<<endl;
    // display the emitting color according to the wavelength
    // declare variable
    int wavelength = 0;
    string emitted_color="";
    // collect the wavelength
    cout<<"Enter a wavelength: "; 
    cin>>wavelength;            
    // multiway statement
    if(wavelength<=379 && wavelength>=10)
        emitted_color = "infrared";
    else if(wavelength<=520 && wavelength>=380)
        emitted_color = "blue";
    else if(wavelength<=590 && wavelength>=521)
        emitted_color = "green";
    else if(wavelength<=740 && wavelength>=591)
        emitted_color = "red";
    else if(wavelength>=741)
        emitted_color = "ultraviolet";
    else
        emitted_color="undefined";
   
    // prompt result
    cout<<wavelength<<" nm emits = "<<emitted_color<<endl;

    cout<<"\n--------- Example 6: nested conditional statement  ----------"<<endl;
    // recollect number
    cout<<"Enter a number: ";
    cin>>number;
    // check if a number is even and positive, odd and positive, even and negative, odd and negative, or zero
    if(number>0)
    {
        if(number%2==0)
            cout<<"number is even and positive"<<endl;
        else
            cout<<"number is odd and positive"<<endl;
    }
    else if(number<0)
    {
        if(number%2==0)
            cout<<"number is even and negative"<<endl;
        else
            cout<<"number is odd and negative"<<endl;
    }
    else{
        cout<<"Number is zero"<<endl;
    }
    cout<<"\n--------- LAB excersise  ----------"<<endl;
    //declare the variables
    float weight = 0.0;
    float cost = 0.0;

    //collect weight from the user
    cout<<"Enter the weight of the package (in pounds): ";
    cin>>weight;

    //multiway if-else to get shipping cost
    if(weight<=0){
        cost = 0.0;
    }
    else if(weight<=2){
        cost = 5.00;
    }
    else if(weight<=5){
        cost = 8.20;
    }
    else if(weight<=10){
        cost = 10.25;
    }
    else{
        cost = 12.50;
    }

    //displaying the result
    cout<<"A package of weight "<<weight<<" lbs costs $"<<cost<<endl;
    
    return 0;
}
