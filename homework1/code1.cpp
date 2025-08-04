#include<iostream>

using namespace std;
int main() {
    string msg = "Welcome to ", city = "";
    cout << "Enter a city: ";
    cin >> city;
    string new_msg = msg + city;
    cout << "The new message " << new_msg << " has " << new_msg.length() << " characters." << endl;
    cout << new_msg[2] << new_msg[new_msg.length()-2] << endl;
    int ma_index = new_msg.find("ma");
    cout << new_msg.replace(new_msg.find("ma"), 2, "% EXAM 1 %") << endl;
    return 0;
}
