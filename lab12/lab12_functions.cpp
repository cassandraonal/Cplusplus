/*
Cassandra Sbordoni
June 16, pointer, reference, array application
*/
#include<cstdlib> // for rand()
#include<ctime> // for time()
#include<iostream>
using namespace std;

//example 1: pointer and reference

void pointer_ref(){
    //declare the variable
    int num = 12;
    char sym = '$';
    string n = "Peter";

    // declare the pointers
    int* pointer_num;
    char* pointer_char;
    string* pointer_string;
    // check what is a pointer equivalent to
    cout<<"check a pointer after declaration = "<<pointer_string<<endl; 
    
    // pointer initialized with memory address of a variable
    pointer_num = &num; // '&'num will give you the memory address of num's value
    pointer_char = &sym;
    pointer_string = &n;

    cout<<"check a pointer reference = "<<pointer_string<<endl; 

    // dereference operator to obtain the value of the memory address
    cout<<"dereference a pointer = "<<*pointer_string<<endl; //*pointer_string will show the value that the memory address is pointing to
}
// example 2: passing an address into a function
// function to print a value
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
}
// function to pass a reference
void printbyref(string& v){
    cout<<"Passed by reference = "<<v<<endl;

}
// function to pass a memory address
void printaddress(string* v){
    cout<<"Pass memory address = "<<v<<endl;
}

// example 3: pointer in an array
void pointer_array(){
    int s = 5;
    int arr[s] = {1,2,3,4,5};

    // pointer to an array
    int *ptr = arr;

    // loop through an array using pointer
    for(int i = 0; i<s; i++){
        //access to an array element using pointer
        cout<<"Value = "<<*(ptr +i)<<endl; // just *(ptr) will only point to the first value in the array, adding +i will loop through all elements in the array

    }
}
// example 4: passing an array into a function
void fillup(int sizearray, int *arr){
    for(int i = 0; i<sizearray; i++){
        cout<<"Enter a number ";
        cin>>arr[i];
    }
}

void printelements(int sizearray, int *arr){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }   
    cout<<endl;
}

// example 5: search application
// function to collect up to five positive numbers if the user enters a negative number or zero, the collection of number will stop.
// numberuserindex --> value of the total consecutive positive numbers entered by the user

void fillarray(int *arr, int &numberuserindex){
    int number, index = 0;
    do{
    cout<<"Enter a positive numbers: ";
    cin>>number;
        if(number>0){
        arr[index] = number;
        index++;
        }
    } while(number>0 && index<ARRAY_SIZE);
    // update the value of variable numberuserindex
    numberuserindex = index;
}

// function to return an index of the target number or -1 if the number was not found
int search(int *arr, int numberuserindex, int target){
   int index = 0; // the index if the target number is found
   bool found = false; // flag
   while(!(found) && index<numberuserindex){
    if(target == arr[index])
        found = true;
    else    
        index++; //goes to check the next element in the array if it is the target number (searchnumber = 8) in main file
   }
   if(found)
        return index;
   else
        return -1;
}

// example 6: multidimensional array, 2D array
//row --> top to bottom , collum --> Left to right.
// functions cannot start with a number
void array_2d(){
    // declare a 2D array, of size 3-by-5
    int array2d[3][5] = {
        {1,2,3,4,5}, // row 1 with index of 0
        {-5,10,-3,9,-1}, // row 2
        {10,20} // row 3
    };

    //loop through each element in the 2d array
    for(int row = 0; row<3; row++){
        for(int col = 0; col<5; col++){
            cout<<array2d[row][col]<<" \t";
        }
        cout<<endl;
    }
}
// example 7: passing a 2D array into a function
void fillup_2d(int a[][SIZE_COL]){
    for(int row = 0; row<SIZE_ROW ; row++){
        for(int col= 0; col<SIZE_COL ; col++){
            cout<<"Enter a number for row "<<row+1<<" and col "<<col+1<<" = ";
            cin>>a[row][col];
        }
    }
}
// function print elements in a 2D array
void print_2d(int a[][SIZE_COL]){
    for(int row = 0; row<SIZE_ROW ; row++){
        for(int col= 0; col<SIZE_COL ; col++){
            cout<<a[row][col]<<"\t";
        }
        cout<<endl;
    }
}
// function that count and returns the total of even numbers in a 2D array
int count_even(int a[][SIZE_COL]){
    int counter = 0;
    for(int row = 0; row<SIZE_ROW ; row++){
        for(int col= 0; col<SIZE_COL ; col++){
            if(a[row][col] %2 == 0){
                counter++;
            }
        }
    }
    return counter;
}

// exercise 1, function that finds and returns the maximum number
int findmax(int *arr){
    int max = arr[0]; // assume the first element is the max
    for(int i = 1; i<ARRAY_SIZE; i++){
        if(arr[i]>max){
            max = arr[i]; // update max if current element is greater
        }
    }
    return max;
}

// exercise b, function to populate 5x5 array with random numbers
void populatearray2d(int arr[][ARRAY_SIZE]){
    srand(time(0)); //seed random number generator
    for(int row = 0; row<ARRAY_SIZE; row++){
        for(int col = 0; col<ARRAY_SIZE; col++){
            arr[row][col] = rand() % 255 +1; // random number from 1 to 255
        }
    }
}

// function that returns count of values in range [min, max] in 5-by-5 array
int range2d(int arr[][ARRAY_SIZE], int max, int min){
    int counter = 0;
    for(int row = 0; row<ARRAY_SIZE; row++){
        for(int col = 0; col<ARRAY_SIZE; col++){
            if(arr[row][col]>= min && arr[row][col] <= max){
                counter++;
            }
        }
    }
    return counter;
}
// function to print a 5-by-5 array(used in Exercise B)
void print_2d_5x5(int arr[][ARRAY_SIZE]){
    for(int row = 0; row<ARRAY_SIZE; row++){
        for(int col = 0; col<ARRAY_SIZE; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}
