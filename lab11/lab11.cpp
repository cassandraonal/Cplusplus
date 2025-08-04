/*
Cassandra Sbordoni
June 11, 2025
introduction to array
*/
#include<iostream>
#include<cstdlib> //for lab excersise
#include<ctime> // for lab excersise
#include "lab11_functions.cpp"

using namespace std;

int main(){
    cout<<"\n -------- example 1: declaring an array -----"<<endl;
    array_declare();

    cout<<"\n -------- example 2: initializing an array -----"<<endl;
    array_char();

    cout<<"\n -------- example 3: find the size of an array -----"<<endl;
    int s = array_size();
    cout<<"The size of the array is = "<<s<<endl;
    
    cout<<"\n -------- example 4: loop through each element in an array -----"<<endl;
    array_ages();

    cout<<"\n -------- example 5: populate values int an array -----"<<endl;
    // declare size of the array
    int x = 5;
    // declare array
    int numbers[s];
    // pass the array into a function
    fillup(x, numbers);
    print_elements(x, numbers);

    cout<<"\n -------- example 6: array application -----"<<endl;
    int m = max_num(x,numbers);
    cout<<"The maximum number is "<<m<<endl;

    cout<<"\n -------- example 7: negative numbers counter -----"<<endl;
    int c = count_negative(x, numbers);
    propmt_count(c,"negative");

    cout<<"\n -------- example 8: count numbers between 1 and 5 -----"<<endl;
    int p = count1_5(x, numbers);
    propmt_count(p, "between 1 and 5");

    cout<<"\n -------- LAB Excersise: A -----"<<endl;
    int* ptr;
    int var = 7;
    int foo = 21;
    ptr = &var; // pointer is equal to address of var (address a)
    ptr = &foo; //places the address of foo to the pointer ( address b ) giving what is stored into that variable witht that address
    int& ref = var; //ref will be the same thing as var they reference the same variable.
    // print var or print ref will both give the same value
    // we created the reference to be the same as var, and we can not tell ref now to point at foo, becasue it is declared as the same as var, not foo.
    //  ptr = &'variable name' ptr = the address of 'variable name'
    // we can always switch the ptr to point at some different variable's address, while once you set
    // int& ref = to a certain variable, ref is saved and can be used only to call that variable you assigned it to.
    
    cout<<"\nValue of var: "<<var;
    cout<<"\nValue of ref (reference to var): "<<ref;
    cout<<"\nValue of foo: "<<foo;
    cout<<"\nValue at ptr (foo): "<<*ptr<<endl;

    cout<<"\n -------- LAB Excersise: B -----"<<endl;
    srand(time(0)); // seed random number generator

    const int SIZE = 10;
    int myArray[SIZE]; // Declare array of size 10

    fillArray(myArray, SIZE); //call function to fill array
    printArray(myArray, SIZE); //show array values
    int evenCount = countEvenNumbers(myArray, SIZE); //counts evens
    cout<<"Number of even numbers: "<<evenCount<<endl;

    return 0;
}
