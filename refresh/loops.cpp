#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::endl;

int main(){
    array<int, 5> a1{0, 1, 2, 3, 4};
    
    cout << "-----Range-Based-----" << endl;
    // Do not have to worry about indexing, for each element i in a1.
    for (auto i : a1) {
        cout << i << " ";
        cout << a1[i] * 2 << endl;
    }
    cout << endl;

    // We can iterate through STIL containers and dereference them to access their values. 
    // Safe and intutive, can use a1.begin() or begin(a1) to not worry about indexing
    cout << "-----Iterators-----" << endl;
    for (auto it = a1.begin(); it < end(a1); it++) {
        cout << *it << endl;
    }
    cout << endl;
 
    // Reverese iterators use .rbegin() and .rend() to go in reverse
    cout << "-----Reverse-Iterators-----" << endl;
    for (auto it = a1.rbegin(); it < rend(a1); it++) {
        cout << *it << endl;
    }
    cout << endl;

    // C-style loops by using size in our range check
    cout << "-----Explicit-Size-Comparison-----" << endl;
    for (auto i = 0u; i < a1.size(); i++) {
        cout << a1[i] << endl;
    }
    cout << endl;
}