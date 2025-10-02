#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // Vectors can expand/contract, so no need to specify a size
    vector<int> v1;

    // Method for getting vector size
    cout << "Vector 1 size = " << v1.size() << endl;

    // Method for getting vector capacity
    cout << "Vector 1 size = " << v1.capacity() << endl;

}