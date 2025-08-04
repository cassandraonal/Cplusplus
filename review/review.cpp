#include <iostream>
#include <cmath>    // for pow()
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()

using namespace std;

// Constant for pi
const float PI = 3.14159;

// Function to get a height between 2 and 10
int getHeight() {
    int height;
    cout << "Enter a height between 2 and 10: ";
    cin >> height;

    while (height < 2 || height > 10) {
        cout << "Invalid input. Please enter a number between 2 and 10: ";
        cin >> height;
    }

    return height;
}

// Function to get a random radius between 7 and 35
int getRadius() {
    return (rand() % (35 - 7 + 1)) + 7; // Random number between 7 and 35
}

// Function to calculate the volume of a cylinder
float calculateVolume(int height, int radius) {
    return PI * pow(radius, 2) * height;
}

// Function to display the result
void displayResult(int height, int radius, float volume) {
    cout << "A cylinder with height of " << height << " inches and a radius of "
         << radius << " inches is " << volume << " in^3" << endl;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    int height = getHeight();
    int radius = getRadius();
    float volume = calculateVolume(height, radius);

    displayResult(height, radius, volume);

    return 0;
}
