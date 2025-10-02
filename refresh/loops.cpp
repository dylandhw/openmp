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

    cout << "-----Iterators-----" << endl;
    for (auto it = a1.begin(); it < end(a1); it++) {
        cout << *it << endl;
    }
    cout << endl;
}