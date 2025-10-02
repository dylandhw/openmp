#include <array>
#include <iostream>

using std::array;
using std::cout;
using std::endl;

int main() {
    // Stores 3 integers in an array called "a_0"
    array<int, 3> a_0;
    // Initializing a_0
    a_0[0] = 10;
    a_0[1] = 20;
    a_0[2] = 30;

    for(int i = 0; i < 3; i++) cout << "Index " << i+1 << "'s value is " << a_0[i] << endl;
    

    // Can also initialize everything at once
    a_0 = {40, 50, 60};
    for(int i = 0; i < 3; i++) cout << "Index " << i+1 << "'s value is " << a_0[i] << endl;
}