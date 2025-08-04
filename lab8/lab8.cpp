/*
Cassandra Sbordoni
June 4, nested loop
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"---------- Example 1: continue statement ------------"<<endl;
    // fill up the table according to the following code:
    int count = 0;
    int i=10;
    while(i>5){
        i--;
        if(i%2==0){
            count +=i;
            continue;
        }
        count -= 3;
    }
    cout<<"Final count is "<<count<<endl; 
    /*  TABLE ANALYSIS
    loop iteration  | while(i>5)        |   i--     |   if(i%2==0)      |   count +=i   |   count -=3
    --------------------------------------------------------------------------------------------------------
        1           |while(10>5)TRUE    |  i=10-1=9 | if(9%2==0) False  |   skip        |  count = 0-3 = -3
    ---------------------------------------------------------------------------------------------------------
        2           |  while(9>5) true  | i=9-1=8   | if(8%2==0) true   |count = -3+8=5 | skip                  
    ----------------------------------------------------------------------------------------------------------
        3           |  while(8>5) true  | i=8-1=7   | if(7%2==0)false   |  skip         |count= 5 - 3= 2
    -----------------------------------------------------------------------------------------------------------
        4           | while(7>5) ture   | i=7-1=6   | if(6%2==0) ture   |  count=2+6=8  | skip
    ------------------------------------------------------------------------------------------------------------
        5           | while(6>5) true   | i=6-1=5   | if(5%2==0) false  |   skip        |  count=8 -3= 5  
    ------------------------------------------------------------------------------------------------------------
        6           | while(5>5) FALSE --> STOP THE WHILE LOOP
    what would be prompting in the Terminal after the while loop?
    Final count is 5
    
    
    
    */
    
    cout<<"---------- Example 2: nested loop ------------"<<endl;
    int n = 0;
    // outer loop
    while(n++ <3){
        cout<<"\n OUTER LOOP"<<n<<"\t\t";
        // inner loop
        cout<<"\t inner loop = ";
        int m = 0;
        while(m++ < 5){
            cout<<"\t"<<m;
        }
    }

    cout<<"---------- Example 3: nested loop ------------"<<endl;
    // cinema seating grid
    // declare identifiers or variables
    int rows=0;
    int seats=0;
    // collect data
    cout<<"Enter the number of rows = ";
    cin>>rows;
    cout<<"Enter the number of seats = ";
    cin>>seats;
    // create 2D seating grid
    cout<<"\nSeat arrangement"<<endl;
    for(int r=1; r<=rows; r++ ){ // top to bottom , creating rows
        for(int s=1; s<=seats; s++){ // left to right, creating collumns
            cout<<"Row "<<r<<" Seat "<<s<<"\t";
        }
        cout<<endl;
    }

    cout<<"---------- Example 4: 2D plotting ------------"<<endl;
    // 9-by-9 graph
    int graph_size = 9;
    for(int row = 1; row<=graph_size; row++){
        for(int col=1; col<=graph_size; col++){
            if(row==5 || col == 5)
                cout<<" x ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    cout<<"---------- Example 5: 2D plotting of letter H ------------"<<endl;
    // 10-by-10
    int plot_size = 10;
    for(int row=1; row<=plot_size; row++){
        for(int col = 1; col<= plot_size ; col++){
            if((col>=3 && col<=4 && row>=3 && row<=8 ) || (col>=5 && col<=6 && row>=5 && row<=6) || (col>=7 && col<=8 && row>=3 && row<=8 ))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    cout<<"------------------ LAB EXERCISE: A ------------------"<<endl;
    const int GUESS = 5;
    int user_number;

    while(true){
        cout<<"Enter a number between 1 and 10: ";
        cin>>user_number;
        if(user_number < 1 || user_number > 10){
            cout<<"Invalid input! Please enter a number between 1 and 10.\n";
            continue;
        }
        if(user_number> GUESS){
            cout<<"The entered number is hgih.\n";
        }
        else if(user_number < GUESS ){
            cout<<"The entered number is low.\n";
        }
        else{
            cout<<"Congratulations! You guessed the correct number: "<<GUESS<<endl;
            break;
        }
    }
    cout<<"------------------ LAB EXERCISE: B ------------------"<<endl;
    int size = 10;

    for(int row = 1; row <= size; row++){
        for(int col = 1; col <= size; col++){
            if((col == 3 || col == 4 || col == 7 || col == 8) && (row >= 3 && row <=8)){
                cout<<" % ";
            }
            else if((col == 5 || col == 6) && (row >= 7 && row <= 10)){
                cout<<" % ";
            }
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }

    return 0;
}
