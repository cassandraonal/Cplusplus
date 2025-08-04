#include<iostream>
using namespace std;
int main(){
    const float PI = 3.14159; int radius = 0, height = 0;
    cout << "Enter a radius in cm = "; cin >> radius; cout << "Enter a height in cm = "; cin >> height;
    bool checkGreater = radius > height;
    bool checkEquallity = radius == height || radius < 10;
    height *= 3; radius += 5;
    bool checkCond = (radius != height && radius > height);
    float volume = PI * radius * radius * height;
    cout << "The volume of a right cylinder with radius " << radius << "cm and height " << height << "cm is = " << volume << "cm^3" << endl << endl;
return 0;
}
