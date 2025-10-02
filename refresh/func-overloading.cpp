#include <iostream>

using std::cout;
using std::endl;

// Pritns value of i, its size, and incremetns it by 1
int print_and_inc_int(int i) {
    cout << "Value: " << i << ", S: " << sizeof(i) << endl;
    return i + 1;
}

float print_and_inc_float(float sp) {
    cout << "Value: " << sp << ", S: " << sizeof(sp) << endl;
    return sp + 1;
}

double print_and_inc_double(double dp) {
    cout << "Value: " << dp << ", S: " << sizeof(dp) << endl;
    return dp + 1;
}

int main() {
    int i = 4362;
}