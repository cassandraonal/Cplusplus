/*
Cassandra Sbordoni
May 28, 2025, numerical opeators
*/
#include <iostream>   // Include input-output stream library

using namespace std;  // Use the standard namespace

int main() {
    cout<<"\n--------- example 1: modulus operator -------- "<<endl;
    cout<<"Remainder of 7 divided by 5 = "<<(7%5)<<endl;
    cout<<"\n--------- example 2: assignment operators -------- "<<endl;
    int n1 = 5;
    int n2 = 9;
    cout<<"original n1 = "<<n1<<endl;
    cout<<"original n2 = "<<n2<<endl;
    n1++;
    cout<<"n1++ = "<<n1<<endl;
    n2--;
    cout<<"n2-- = "<<n2<<endl;
    n1 += 4; // n1 = n1+4
    n2 -=6; //n2 = n2-6
    cout<<"n1 += 4 --> " <<n1<<endl;
    cout<<"n2 -= 6 --> "<<n2<<endl;

    n1 /= 3;
    n2 *= 6;
    cout<<"n1 /= 3 --> "<<n1<<endl;
    cout<<"n2 *= 6 --> "<<n2<<endl;

    n2 %= 5;
    n1 %= 2;

    cout<<"n1 %=2 --> "<<n1<<endl;
    cout<<"n2 %=5 --> "<<n2<<endl;

    cout<<"\n--------- example 3: comparison operator -------- "<<endl;
    int n3 = -15;
    int n4 = 10;

    cout<<"original n3 =            "<<n3<<endl;
    cout<<"original n4 =            "<<n4<<endl;
    cout<<"is n3 equal to n4?       "<<(n3 == n4)<<endl;
    cout<<"is n3 greater than 0?    "<<(n3>0)<<endl;
    cout<<"is n4 less than 100?     "<<(n4<100)<<endl;
    cout<<"is n3 multiple of 3?     "<<(n3%3 == 0)<<endl;
    cout<<"is n4 not equal to 8?    "<<(n4 != 8)<<endl;
    cout<<"is n3 not an even num?   "<<(n3 %2 != 0)<<endl; // could also be ended with <<!(n3 %2 == 0)<<endl;
    
    cout<<"\n--------- example 4: Boolean operators -------- "<<endl;
    int n = 25;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"is n even and positive?     "<<(n%2 == 0 && n>0)<<endl;
    cout<<"is n odd and negative?      "<<(n%2 !=0 && n<0)<<endl;
    cout<<"is n between 1 and 9?       "<<(n>=1 && n<=9)<<endl; // 1<= n <=9
    cout<<"is n not between -5 and 5?  "<<!(n>=-5 && n<=5)<<endl; 
    cout<<"is n not between -5 and 5?  "<<(n<-5 || n>5)<<endl;
 
    cout<<"\n-------------- LAB Exersice ---------------"<<endl;
    int number;      
    char character;   

    // Prompt user to enter and collect a number and a character
    cout<<"Enter an integer number: ";
    cin>>number;    // Read number from user input

    cout<<"Enter a character: ";
    cin>>character; // Read character from user input

    // Triple the number using assignment operator
    number *= 3;
    cout<<"Tripple the number                           "<<number<<endl;

    // Remainder of the character value with 60 using assignment operator
    character %= 60;
    cout<<"Remainder of the character                   "<<int(character)<<endl;
    
    // Check if the number is less than or equal to the (updated) character value
    cout<<"is the number <= character value?            "<<(number <= int(character))<<endl;

    // Check if number <= -1 OR character value != 5 using logical operators
    cout<<"is the number <=-1 or character value !=5?   "<<(number <=-1 || int(character) != 5)<<endl;

    // Check if character value is between -2 and 2, inclusive
    cout<<"is the character value between -2 and 2?     "<<(int(character) >= -2 && int(character) <= 2)<<endl;
   
    return 0;
}
