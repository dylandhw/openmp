#include <iostream>

using std::cout;
using std::endl;

int main() {
    int a = 4;
    int b = 10;

    if (a == 5) {
        cout << "Inside if statement (a == " << a << ")" << endl;
    } else if (a == 6) {
        cout << "A is not equal to 5, but it is equal to 6!" << endl;
    } else {
        cout << "A is not equal to either!" << endl;  
    }
    
    cout << "---Switch-Statements-----" << endl;
    switch (a) {
        case 4:
            cout << a << " == 4" << endl;
            break;
        case 6:
            cout << a << " == 6" << endl;
            break;
    }

    return 0;
}