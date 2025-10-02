#include <iostream>

using std::cout;
using std::endl;


/* Templates 
Can generalize the functions. 
Basically tells the compiler that T is a placeholder for a data type 
T can be replaced by int, float, etc. Even by class types.
When you call this function with a specific type, like int, the compiler will instantiate a version of this function for ints...
*/
template <typename T>
T print_and_inc(T i){
    cout << "Value: " << i << ", Size: " << sizeof(i) << endl;
    return i + 1;
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