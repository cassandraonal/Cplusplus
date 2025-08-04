/*
Cassandra Sbordoni
June 3, loops
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"--------- Example 1: for loops as an increment counter -----------"<<endl;
    // for loop to count from 1 to 10 inclusive(meaning we include the 1 and the 10 in our count)
    for(int n = 1; n<=10; n++ ){
        cout<<n<<"\t";
    }
    // n is a local variable for the for loop
     cout<<"--------- Example 2: for loops as a decrement counter -----------"<<endl;
    // for loop to count from 5 to -5 inclusive(including 5 & -5)
    int m = 5;
    for(m; m>=-5; m--){// 5 4 3 2 1 0 -1 -2 -3 -4 -5 (starts at 5, condition must be >=-5 to stop at -5.)
        cout<<m<<"\t";
    } 
    cout<<endl<<"Final m = "<<m<<endl; // -6 is final m because it created the false to terminate the loop.
    
    cout<<"--------- Example 3: for loops as an increment counter with different steps -----------"<<endl;
    // print from 1 to 20 with step of 3
    for(int n = 1; n<=20; n+=3){
        cout<<n<<"\t";
    }
    cout<<endl;

    cout<<"--------- Example 4: for loop with nested conditional statement -----------"<<endl;
    // print from 0 to 30 with a step of 4. If the count is multipled of 5, it will print HELLO instead of the number
    for(int step = 0; step<=30; step +=4){
        if(step%5==0 && step != 0) // %5 == 0 means multiple of 5
            cout<<"HELLO"<<"\t";
        else
        cout<<step<<"\t";
    }

    cout<<"--------- Example 5: for loop with nested conditional statement -----------"<<endl;
    // count how many numbers are multiplied 5 from a counter between -10 and 10 with a step of 3
    int counter_mul5 = 0;
    for(int counter = -10; counter<=10; counter +=3){
        cout<<counter<<"\t";
        if(counter%5 == 0 && counter !=0)
            counter_mul5 ++; 
    }
    // prompt result
    cout<<endl<<"There is/are "<<counter_mul5<<" number/s multiple of 5"<<endl;
    
    cout<<"--------- Example 6: for loop with nested conditional statement -----------"<<endl;
    // add all even numbers from a counter between -1 and 9
    int sum_even = 0;
    for(int n = -1; n<=9; n++){
        cout<<n<<"\t";
        if(n%2==0 && n != 0){
            sum_even += n;
        }
    }
    // prompt result
    cout<<endl<<"Sum of all even numbers = "<<sum_even<<endl;

    cout<<"--------- LAB EXERCISE 1 -----------"<<endl;
    // fill up the table
    int sum=0, count=0;
    for (int n = 20; n > 10; n-=2){
        if (n%3 ==0){
            count++;
            continue; 
        }
        sum += n;
 }
 cout<<"The sum is: "<<sum<<endl;
 cout<<"The count is: "<<count<<endl;

 /*
 TABLE
 loop iteration |   n   |   n>0(T/F)    |   if(n%3==0)  |   count++ |   sum += n    |   n-=2
-----------------------------------------------------------------------------------------------------------
        1       |   28  |   20>10 (True) |   False       | skip      |  sum=0+20=20  |   n=20-2=18
-----------------------------------------------------------------------------------------------------------
        2       |   18  |   18>10 (True) |   True        | 1         |   skip        |   n=18-2=16
-----------------------------------------------------------------------------------------------------------
        3       |   16  |   16>10 (True) |   False       | skip      | sum=20+16=36  |   n=16-2=14
-----------------------------------------------------------------------------------------------------------
        4       |   14  |   14>10 (True) |   False       | skip      | sum=36+14=50  |   n=14-2=12   
-----------------------------------------------------------------------------------------------------------
        5       |   12  |   12>10 (True) |   True        | 2         | skip          | n=12-2=10
-----------------------------------------------------------------------------------------------------------
        6       |   10  |   10>10 (False)--->STOP FOR LOOP
    
        // what should be prompting after the for loop?
        The sum is : 50
        The count is : 2

        */
    cout<<"--------- LAB EXERCISE 2 -----------"<<endl;
    int i=0, add=0;
    while(i<=10){
        i++;
    if(i<5 && i !=2){   
         cout<<"i = "<<i<<endl;
    }
    else{continue;}
        add +=i;
    }
    cout<<"Add = "<<add<<endl;
    /*
    TABLE
    loop iteration  |  i<=10        | i++       | if(i<5 && i != 2)               | cout<<"i = "<<i;  |  else             | add += i;
    ----------------------------------------------------------------------------------------------------------------------------------
        1           | 0<=10 True    |  0+1=1    |  1<5 true && 1!=2 true (True)   | "i = 1 "          | False             | add = 0+1 = 1 
    ----------------------------------------------------------------------------------------------------------------------------------
        2           |  1<=10 True   | 1+1=2     | 2<5 true && 2!=2 false (False)  | skip              | True(continued)   | skip
    ----------------------------------------------------------------------------------------------------------------------------------
        3           | 2<=10 True    | 2+1=3     | 3<5 true && 3!=2 true (true)    | "i = 3 "          | False             | add = 1+3 = 4
    ------------------------------------------------------------------------------------------------------------------------------------
        4           | 3<=10 True    | 3+1=4     | 4<5 true && 4!=2 true (true)    | "i = 4 "          | False             | add = 4+4= 8
    -------------------------------------------------------------------------------------------------------------------------------------
        5           | 4<=10 True    | 4+1=5     | 5<5 false && 5!=2 true (False)  | skip              |True(continues)    |skip
    -------------------------------------------------------------------------------------------------------------------------------------
        6           | 5<=10 True    | 5+1=6     | 6<5 false && 6!=2 true (False)  | skip              |True(continues)    |skip
    -------------------------------------------------------------------------------------------------------------------------------------
        7           | 6<=10 True    | 6+1=7     | 7<5 false && 6!=2 true (false)  | skip              |True(continues)    |skip
    -------------------------------------------------------------------------------------------------------------------------------------
        8           | 7<=10 True    | 7+1=8     | 8<5 false && 8!=2 true (false)  | skip              |True(continues)    |skip
    --------------------------------------------------------------------------------------------------------------------------------------
        9           | 8<=10 True    | 8+1=9     | 9<5 false && 9!=2 true (false)  | skip              |True(continues)    |skip
    ---------------------------------------------------------------------------------------------------------------------------------------
        10          | 9<=10 True    | 9+1=10    | 10<5 false && 10!=2 true (false)| skip              |True(continues)    |skip
    ---------------------------------------------------------------------------------------------------------------------------------------
        11          | 10<=10 True   | 10+1=11   | 11<5 false && 11!=2 true (false)| skip              |True(continues)    |skip
    ---------------------------------------------------------------------------------------------------------------------------------------
        12          | 11<=10 (False)--->STOP WHILE LOOP
    
        // what should be prompting after the for loop?
        Add = 8
    */


    cout<<"---------- WHILE LOOP ----------"<<endl;
    cout<<"--------- example 7: while loop as an increment counter -----------"<<endl;
    // use a while loop to print from 1 to 5, inclusive
    // initial value for the while loop
    m = 1;
    while(m<=5) //condition
    {
        cout<<m<<"\t";
        m++; // update of loop variable 'm'
    }

    cout<<"--------- example 8: while loop as a decrement counter -----------"<<endl;
    // use a while loop to print from 3 to 0
    int p = 3;
    while(p>=0){
        cout<<p<<"\t";
        p--; // update the loop variable 'p'
    }
    cout<<endl<<"update loop variable within the while loop condition"<<endl;
    p = 3;
    while(p-- >= 0){ 
        cout<<p<<"\t";
    }
        cout<<endl<<"update loop variable within the while loop condition"<<endl;
     p = 3;
    while(--p >= 0){ 
        cout<<p<<"\t";
    }
    
    cout<<"\n----------- example 9: while loop to valid a number --------"<<endl;
    // enter a number between 10 and 20. Use a while to recollect the number if it is not between 10 and 20
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    while(!(number>=10 && number<=20)){
        cout<<"Invalid! Enter a number between 10 and 20: ";
        cin>>number;
    }
    cout<<"Entered number = "<<number<<endl;
    
    cout<<"\n----------- example 10: do-while loop --------"<<endl;
    char choice ='y';
    do{
        cout<<"Enter a number: ";
        cin>>number; 

        if(number==0){
            cout<<"The number is zero"<<endl;
        }
        else if(number%2== 0){
            cout<<number<<" is even!"<<endl;
        }
        else{
            cout<<number<<" is odd!"<<endl;
        }

        cout<<"Do you want another run? ";
        cin>>choice;

    }while(choice=='y' || choice == 'Y');
    cout<<"Thank you for using our services!"<<endl;

    cout<<"\n----------- example 11: do-while loop as a checkpoint --------"<<endl;
    // do-while loop to validate if the number is between 1 and 9
    int num;
    do{
       cout<<"Enter a number: ";
       cin>>num;

    }while(num<1 || num>9); // !(num>=1 && num<=9)
    cout<<num<<" is valid!"<<endl;

    cout<<"\n----------- example 12: break statement in a loop --------"<<endl;    
    // collect and sum four negative numbers. If the user enters a positive number or zero, the loop will terminate
    int sum_negative = 0;
    int loop_counter = 1;
    int neg_number;
    cout<<"Enter four negative numbers: ";
    while(loop_counter++ <= 4){
        cin>>neg_number;
        if(neg_number<0){
            sum_negative += neg_number;
        }
        else{
            cout<<"A non-negative number was entered! Loop will be terminated!"<<endl;
            break;
        }
    }
    // prompt result
    cout<<"The sum of all negative numbers = "<<sum_negative<<endl;

    cout<<"\n----------- example 13: break statement in a loop  --------"<<endl;    
    // simulate a ATM
    int balance = 1000;
    int widthdraw_amount = 0;
    int selection;
    char choice_transaction = 'y';
    do{
        cout<<"How can I help you today? "<<endl;
        cout<<"1 for account balance"<<endl;
        cout<<"2 for widthdraw"<<endl;
        cout<<"3 for exit"<<endl;
        cin>>selection;
        if(selection==1){
            cout<<"Your balance is $"<<balance<<endl;
            cout<<"Do you want to make another transaction: ";
            cin>>choice_transaction;
            if(choice_transaction != 'y' && choice_transaction != 'Y'){
                cout<<"Thank you for banking with us! Good Bye!"<<endl;
                break;
            }
        }
        else if(selection==2){
            cout<<"How much do you want to widthdraw? ";
            cin>>widthdraw_amount;
            while(widthdraw_amount>balance){
                cout<<"Insuficient fund. Enter an amount less than "<<balance<<endl;
                cin>>widthdraw_amount;
            }
            cout<<"Widthdraw amount $"<<widthdraw_amount;
            balance -= widthdraw_amount;
            cout<<"Do you want to make another transaction: ";
            cin>>choice_transaction;
            if(choice_transaction != 'y' && choice_transaction != 'Y'){
                cout<<"Thank you for banking with us! Good Bye!"<<endl;
                break;
            }
        }
        else if(selection==3){
            cout<<"Thank you for banking with us! Good Bye!"<<endl;
            break;
        }
        else{
            cout<<"Invalid selectioin! Try again!"<<endl;
        }
    }while(true);


    return 0;
}
