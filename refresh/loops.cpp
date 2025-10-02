#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::endl;

int main(){
    array<int, 5> a1{0, 1, 2, 3, 4};
    
    cout << "-----Range-Based-----" << endl;
    for (auto i : a1) {
        cout << i << " ";
    }
    cout << endl;
}