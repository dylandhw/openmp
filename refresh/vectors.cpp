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
    cout << "Vector 1 capacity = " << v1.capacity() << endl;

    // Methods for putting into our vector
    v1.push_back(1); // Less efficient, creates (or copies from) outside vector then copies it in
    v1.emplace_back(2); // More efficient, done in place

    v1.push_back(3); // Capacity is expanded exponentially, everytime we do push_back()
    // We do not need to rely on exponential allocation though..
    v1.reserve(3); // Gives space for 3 integers (only increases the size of our container)
    cout << "Vector 1 size = " << v1.size() << endl;
    cout << "Vector 1 capacity = " << v1.capacity() << endl;       


}