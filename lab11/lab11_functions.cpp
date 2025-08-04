/*
Cassandra Sbordoni
June 11, 2025
introduction to array
*/
#include<iostream>
#include<cstdlib> //for lab excersise
#include<ctime> //for lab excersise
using namespace std;

// example 1 declaring an array
void array_declare(){
    //declare an array with 5 values
    int scores[5];
    cout<<"What is in scores array? "<<scores<<endl;
    scores[0] = 95;
    scores[1] = 60;
    scores[2] = 80;
    scores[3] = 72;
    scores[4] = 100;
    cout<<"The third score is = "<<scores[2]<<endl;
    float average_scores = (scores[0]+scores[1]+scores[2]+scores[3]+scores[4])/5.0; //implicit casting implimented
    cout<<"The average score is = "<<average_scores<<endl;
}

// example 2: character array
void array_char(){
    // declare and initialize a character array
    char sym[5] = {'%' , '@', '$'};
        cout<<"The fourth symbol = "<<sym[3]<<endl;
        cout<<"The second symbol = "<<sym[1]<<endl;
        // update the fourth symbol
        sym[3] = '^';
        cout<<"The fourth symbol = "<<sym[3]<<endl;
}

// example 3: find the size of an array
int array_size(){
    char sym[] = {'%' , '@', '$'};
    int ages[]={5,7,9,10,2,8};
    return (sizeof(ages)/sizeof(ages[0]));
}

// example 4: loop through each element in an array
void array_ages(){
    int array_size = 5;
    int ages[array_size]={5,7,9,10,2};
    for(int i = 0; i<array_size; i++){
        cout<<"age "<<(i+1)<<" = "<<ages[i]<<endl;
    }
}

// example 5: passing an array to a function
void fillup(int array_size, int arr[]){
    for(int i = 0; i<array_size; i++){
        cout<<"Enter number "<<(i+1)<<" = ";
        cin>>arr[i];
    }

}
// function to prompt all elements in an array
void print_elements(int array_size, int arr[]){
    for(int i =0; i<array_size; i++){
        cout<<arr[i]<<" \t ";
    }
    cout<<endl;
}

//example 6: maximum number
int max_num(int array_size, int arr[]){
    // set the initial value of array 'arr' as the max value
    int max_value = arr[0];
    for(int i =1; i<array_size; i++){
        if(arr[i]>max_value){
            max_value = arr[i];
        }
    }
    return max_value;
}

// example 7: function to count and return the amount of numbers that are negative
int count_negative(int array_size, int arr[]){
    // declare the counter
    int counter = 0;
    for(int i =0; i<array_size; i++){
        if(arr[i]<0){
            counter++;
        }
    }
    return counter;
}
// function to prompt result
void propmt_count(int result, string typecount){
    cout<<"There are "<<result<<" numbers that are "<<typecount<<endl;
}

// example 8: define a function to count and return the all numbers that are between 1 and 5, inclusive
int count1_5(int array_size, int arr[]){
    int counter = 0;
    for(int i =0; i<array_size; i++){
        if(arr[i]>=1 && arr[i]<=5){
            counter++;
        }
    }
    return counter;
}

// lab excersise part B

// function 1: fill an array with random numbers between 1 and 9
void fillArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        arr[i] = rand()%9+1; // generates random number between 1 and 9
    }
}

// function 2: counts and returns the even numbers in the arrary.
int countEvenNumbers(int arr[], int size){
    int counter = 0; // declare to save the value 
    for(int i=0; i<size; i++){
        if(arr[i] %2 == 0){
            counter++;
        }
    }
    return counter;
}
// function to print array values
void printArray(int arr[], int size){
    cout<<"Array values: ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
