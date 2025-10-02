#include <iostream>

using std::cout;
using std::endl;

/* Overloading...
Can have multiple functions, of the same name, but with different return types
This allows us to only have to modify the return types of the function, without having to remember it 
We basically call the function, and the compiler figures out which function to throw it in based on its type
*/



// Pritns value of i, its size, and increments it by 1
int print_and_inc(int i) {
    cout << "Value: " << i << ", S: " << sizeof(i) << endl;
    return i + 1;
}

float print_and_inc(float sp) {
    cout << "Value: " << sp << ", S: " << sizeof(sp) << endl;
    return sp + 1;
}

double print_and_inc(double dp) {
    cout << "Value: " << dp << ", S: " << sizeof(dp) << endl;
    return dp + 1;
}

int main() {
    int i = 4362;
    float sp = 20.123;
    float dp = 194.421;

    i = print_and_inc(i);
    sp = print_and_inc(sp);
    dp = print_and_inc(dp);

    cout << "New int value: " << i << endl;
    cout << "New float value: " << sp << endl;
    cout << "New double value: " << dp << endl;

    return 0;
}
