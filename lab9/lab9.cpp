/*
Cassandra Sbordoni
June 4, 2025
intro functions
*/
// declare a global variable before you link the file
int number = 10;

#include<iostream>
#include "lab9_functions.cpp"

using namespace std;

int main(){
    cout<<"\n---------Example 1: void function ---------"<<endl;
    print_hi();
    print_hi();

    cout<<"\n---------Example 2: function with argument ---------"<<endl;
    greeting("Anna");
    greeting("Jason");
    string n ="Peter";
    greeting(n);
    
    cout<<"\n---------Example 3: function with a return value  ---------"<<endl;
    string t = tired(false);
    print_tired(t);
    t = tired(true);
    print_tired(t);
    
    cout<<"\n---------Example 4: function that calculate the area of a rectangle --------"<<endl;
    double length = 5.3;
    double width = 2;
    double area = area_rectangle(length, width);
    print_area(length, width, area);

    cout<<"\n---------Example 5: calculate a Faherenheit temperature using a Celsius. Celsius will be passed to the function --------"<<endl;
    float celsius = 21.5;
    float fahrenheit = fah(celsius);
    print_temp(celsius, fahrenheit);

    cout<<"\n---------Example 6: check a number --------"<<endl;    
    check_num(0);

    cout<<"\n---------Example 7: local variable --------"<<endl;    
    // 'sum' is a local variable of a function 'main'
    int sum = add(3,4) - add(7,2);
    cout<<"The final sum is "<<sum<<endl;

    cout<<"\n---------Example 8: global variable --------"<<endl;    
    cout<<"number is in the main function "<<number<<endl;
    update_number();
    number += 10;
    cout<<"number is in the main function "<<number<<endl;
    update_number();
    
    cout<<"\n--------- LAB Excersise --------"<<endl;    
    int user_num = collected_num();
    print_to_15(user_num);
    int not_mult_3 = count_not_multiple_of_3(user_num);
    print_final_result(user_num, not_mult_3);
    return 0;
}
