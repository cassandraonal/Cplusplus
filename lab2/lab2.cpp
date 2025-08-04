/*
Cassandra Sbordoni
Lab 2, numerical variables
May 28, 2025
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- example 1: integer ------ "<<endl;
    // short, integer and long ---> whole numbers
    int n1 = 3.2;
    short n2 = -10.9; //takes only whole number not decimal bc not a float.
    long n3 = 2285.165; //for each number.
    cout<<"n1 ="<<n1<<"\t";
    cout<<"n2 = "<<n2<<"\t";
    cout<<"n3 = "<<n3<<"\t";
    cout<<"\n----- example 2: float and double ------ "<<endl;
    //float and double --> whole and decimal (fraction) number
    float n4 = -6.25; 
    double n5 = 10.9;
    cout<<"n4 = "<<n4<<"\t";
    cout<<"n5 = "<<n5<<"\t";
    cout<<"\n----- example 3: bool and data type ------ "<<endl;
    // bool --> true = 1, false = 0
    bool testing = false;
    bool result = true;
    cout<<"Testing = "<<testing<<"\t";
    cout<<"Result = "<<result<<"\t";
    cout<<"\n----- example 4: arithmetic operators ------ "<<endl;
    // calculate the height of a free fall object. height = 0.5*gravity*time^2
    //step 1) declare the variables
    float time = 0, height = 0; // create two float in same line sep by a ','
    const float GRAVITY = 9.8;
    // set numbers to one decimal places
    cout.setf(ios::fixed);
    cout.precision(1);
    //step 2) prompt a message asking user to enter a falling time Save the entered falling time in variable
    //'time'
    cout<<"Enter a falling time: ";
    cin>>time;
    //step 3) calculate the height (I can just call height without saying float because I already declared it above as float)
    height = 0.5*GRAVITY*time*time; //set float height = to the calculatioin so it saves the calculated value as height
    // step 4) prompt result
    cout<<"The height of a falling object is: "<<height<<" meters"<<endl;
    cout<<"\n-------------- LAB Excersize ---------------- "<<endl;
    // step 1: declare variables
    int radius;        
    float area = 0.0;  
    float volume = 0.0; 
    const float PI = 3.1416; // define constant value for PI

    //step 2) prompt a message asking the user to enter a radius
    cout<<"Enter the radius of the circle and sphere: ";
    cin>>radius; // take input from user and save to radius

    //step 3) calculate the area of the circle using the formula: area = PI * radius * radius
    area = PI * radius * radius;

    //step 4) calculate the volume of the sphere using the formula: volume = (4/3) * PI * radius^3
    volume = (4.0/3.0) * PI * radius * radius * radius;

    // step 5) show the results
    cout<<"The area of the circle is "<<area<<endl;
    cout<<"The volume of the sphere is "<<volume<<endl;

    cout<<"--------------------------------------------------"<<endl;

    return 0;
}












    

