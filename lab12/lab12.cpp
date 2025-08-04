/*
Cassandra Sbordoni
June 16, pointer, reference, array application
*/
const int ARRAY_SIZE = 5;
// 2D array
const int SIZE_ROW = 2;
const int SIZE_COL = 3;

#include<iostream>
using namespace std;

#include "lab12_functions.cpp"

int main(){
    cout<<"\n-------- Example 1: points and references -------"<<endl;
    pointer_ref();

    cout<<"\n-------- Example 2: poinnts and references in a function -------"<<endl;
    string something = "Hello world!";
    printvalue(something);
    printbyref(something);
    printaddress(&something);

    cout<<"\n-------- Example 3: poinnts and references in an array -------"<<endl;
    pointer_array();

    cout<<"\n-------- Example 4: passing an array using dereference -------"<<endl;
    int array_size = 3;
    int arr_nums[array_size];
    fillup(array_size, arr_nums);
    printelements(array_size, arr_nums);

    cout<<"\n-------- Example 5: searching a value -------"<<endl;
    int a[ARRAY_SIZE];
    int listsize;
    int searchnumber = 8;

    fillarray(a, listsize);
    printelements(listsize, a);
    int search_number = search(a, listsize, searchnumber);
    cout<<"What is the index of number "<<searchnumber<<"? = "<<search_number<<endl;

    cout<<"\n-------- Example 6: 2D array -------"<<endl;
    array_2d();

    cout<<"\n-------- Example 7: passing 2D array into a function -------"<<endl;
    //declare an array, 2-by-3
    int numbers_2d[SIZE_ROW][SIZE_COL];
    fillup_2d(numbers_2d);
    print_2d(numbers_2d);
    int total_even = count_even(numbers_2d);
    cout<<"There is a total of "<<total_even<<" even numbers"<<endl;

    cout<<"\n-------- Exercise a: find max in array 'a' -------"<<endl;
    int maxnumber = findmax(a);
    cout<<"The maximum number is "<<maxnumber<<endl;
    
    cout<<"\n-------- Exercise b: populate 5-by-5 array and find range -------"<<endl;
    int arraynumber2d[ARRAY_SIZE][ARRAY_SIZE] = {0};
    int max = 200;
    int min = 150;
    populatearray2d(arraynumber2d);
    print_2d_5x5(arraynumber2d);
    int totalnumber = range2d(arraynumber2d, max, min);
    cout<<"\nArray has "<<totalnumber<<" numbers between "<<min<<" and "<<max<<endl;

    return 0;
}
