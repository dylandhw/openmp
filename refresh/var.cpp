#include <iostream>

using std::cout;
using std::endl;

int main() {
    float a;
    float b;
    float sum;

    // init var
    a = 5.823;
    b = 10.123;
    
    // tells the compiler to figure out what type it should be...
    auto i = 5; // have to initialize at the same time


    cout << "Integer: " << i << endl;
    sum = a+b;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
}