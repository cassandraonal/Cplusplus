#include <iostream>    // For input and output
#include <cstdlib>     // For rand() and srand()
#include <ctime>       // For time() to seed rand()
#include <cmath>       // For sqrt()
#include <iomanip>     // For setting decimal precision

#include "homework3_function.cpp"

using namespace std;

// ---------- Main Function ----------
int main() {
    srand(time(0));  // Seed random number generator

    int x1 = rand_point();
    int x2 = rand_point();
    int y1 = rand_point();
    int y2 = rand_point();

    double dist = distance(x1, y1, x2, y2);

    print_result(x1, y1, x2, y2, dist);

    return 0;
}
    if (inOrder()) {
        cout << "Numbers are in descending order." << endl;
    } else {
        cout << "Numbers are NOT in descending order." << endl;
    }

    return 0;

int rose(int n){

    if (n<=0){

        return 1;

    }

    else{

        return (rose(n-1)*n);

    }

}

    cout<<"The final answer is "<<rose(6);

    return 0;

}
