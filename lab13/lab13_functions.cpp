/*
Cassandra Sbordoni
June 17,
console failure and io files
*/
#include<iostream>
#include<fstream>
#include<string>
// declare the objects to handle the input and output files
ifstream fin; //handle input files
ofstream fout; // handle output files

using namespace std;

// example 1: console failure
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(cin.fail())
        cout<<"ERROR! input dismatched data type"<<endl;
    else  
        cout<<"Entered number = "<<num<<endl;
    
    // clear cin flat
    cin.clear();
    cin.ignore(10000, '\n');

    // propmt a message to end function
    cout<<"---- END OF FUNCTION! ----"<<endl;

}

// example 2: function  that validates and returns a number
float validatenumber(){
    float n;
    bool isNotValid = false;
    do{
        cout<<"Enter a number: ";
        cin>>n;
        isNotValid = cin.fail(); // becomes true
        cin.clear();
        cin.ignore(10000, '\n');
    }while(isNotValid);
    return n;
}

// example 3: read write
void readfile(string filename){
    fin.open(filename);
    // declare a string variable to temporary hold each line in the file
    string line;
    /*
    use a loop to read each line in the file.
    use 'getline' to read each line in the file. 
    */
   int linecounter = 1;
   while(getline(fin,line)){
    cout<<"Line "<<linecounter<<" = "<<line<<endl;
    linecounter++;
   }

   //close the file
   fin.close();
}

//example 4: wrtie a file
/* fout.open:
- if the file exits, it will overwrite the file
- if the file doesn't exist, it will create a new one
*/
void writefile(string filename){
    fout.open(filename);
    // write the following text in the 'filename'
    for(int n = 1; n<=3; n++){
        fout<<"Good morning "<<n<<endl; // fout --> write (cout-ing) into a text file
    }
    fout<<"Cassandra Sbordoni"<<endl;
    fout.close(); // have to close the file after adding something in it
}

// example 5: append (write) data into an existing file
void appendfile(string filename){
    fout.open(filename, ios::app);

    for(int n = 3; n>=1 ; n--){
        fout<<n<<endl;
    }
    fout<<"GAME OVER!"<<endl;

    fout.close();
}
// example 6: to check if a file existed
// function that returns true if a file exists or false if the file doesn't exist.
bool checkfile(string filename){
    fin.open(filename);
    if(fin.fail())
        return false; // 0
    else
        return true; // 1
}

// Lab exercise 1: 
float calculate(float a, float b){
    char op;
    bool invalid = false;

    do{
        cout<<"Enter an operation (+, -, *, /, %): ";
        cin>>op;

        invalid = cin.fail() || (op != '+' && op != '-' && op != '*' && op != '/' && op != '%');

        if(invalid){
            cout<<"ERROR! Invalid operator. Try again.\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }while(invalid);

    switch(op){
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/':
            if(b == 0){
                cout<<"ERROR! Division by zero.\n";
                return 0;
            }
            return a/b;
        case '%':
            // use modulus only if both numbers are integers
            if((int)b == 0){
                cout<<"ERROR! Modulo by zero.\n";
                return 0;
            }
            return (int)a% (int)b;
        default: return 0; // fallback (should not ever reach here)
    }
}

// Lab exercise 2:
// function to create and write a new text file
void createUserFile(){
    fout.open("data_user.txt"); // creates and opens the file
    fout<<"This is my output file - Cassandra Sbordoni.\n"; // replace with my name
    fout.close(); // always close the file.
}
// function to append text to an existing file
void appendUserMessage(string message){
    fout.open("data_user.txt", ios::app); //open in append mode
    fout<<message<<endl; // add the message at the end
    fout.close(); // close file.
}
// function to create a new file and overwrite text in the new file
void overwriteFile(string filename, string text){
    fout.open(filename); //open in write mode(default), will overwrite if exists
    fout<<text<<endl; //write the given text into the file
    fout.close(); // always close the file
}
