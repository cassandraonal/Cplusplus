#include <iostream>    // For input and output
#include <cstdlib>     // For rand() and srand()
#include <ctime>       // For time() to seed rand()
#include <cmath>       // For sqrt()
#include <iomanip>     // For setting decimal precision

using namespace std;

// Function to generate a random number between -9 and 9
int rand_point() {
    int number = (rand() % 19) - 9; // rand() % 19 gives 0–18, minus 9 = -9 to 9
    return number;
}

// Function to calculate the distance between two points
double distance(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;           // Difference in x values
    int dy = y2 - y1;           // Difference in y values
    double dist = sqrt((dx * dx) + (dy * dy)); // Distance formula
    return dist;
}

// Function to print the result with 2 decimal places
void print_result(int x1, int y1, int x2, int y2, double dist) {
    cout<<fixed<<setprecision(2); // Show 2 decimal digits
    cout<<"The distance of points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is = "<<dist<<endl;
}


bool inOrder() {
    int num1, num2, num3;

    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num2 >= num3) {
        return true;
    } else {
        return false;
    }
}
