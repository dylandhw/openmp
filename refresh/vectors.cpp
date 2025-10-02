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
    v1.reserve(300); // Gives space for 3 integers (only increases the size of our container)
    cout << "Vector 1 size = " << v1.size() << endl;
    cout << "Vector 1 capacity = " << v1.capacity() << endl;       

    v1.shrink_to_fit(); // Takes the capacity down to the size of the vector
    cout << "Vector 1 capacity = " << v1.capacity() << endl;       

    v1.resize(10, 5); // Resize to size of 10 elements, all new elements are of value 5;
    cout << "Vector size: " << v1.size() << endl;
    cout << "Vector capacity: " << v1.capacity() << endl;
    for (auto i : v1) {
        cout << i << " ";
    }
    cout << endl;

    // What if we resize witha  smaller value - we chop off a part of our vector from the end->beginning
    v1.resize(5);
    cout << "Vector size: " << v1.size() << endl;
    cout << "Vector capacity: " << v1.capacity() << endl;
    for (auto i : v1) {
        cout << i << " ";
    }
    cout << endl;

    // Some more methods
    v1.pop_back(); // Gets rid of the last element in the vector
    v1.erase(begin(v1) + 2); // Gets rid of the third element!


    // Accessing vectors just like arrays
    cout << "v1[0] = " << v1[0] << endl;
    // But we can also use .at(). Safer way to access elements (but it is slower since it is doing a range check)
    cout << "v1.at(0) = " << v1.at(0) << endl;
}

