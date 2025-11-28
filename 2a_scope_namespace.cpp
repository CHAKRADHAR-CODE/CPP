/*
i) Question 
    (2a) Implement scope resolution and namespaces.

ii) Description
    This program demonstrates the use of global, local variables and namespaces.
    It shows how to access variables using the scope resolution operator (::).
    A namespace named 'my' is created with its own variable and function.
    The program prints values from local, global, and namespace variables.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int x = 10; // Global variable 

namespace my {
    int x = 20;
    void display() {
        cout << "Inside My, num = " << x << endl;
    }
}

int main() {
    int x = 50;
    cout << "Local num = " << x << endl;
    cout << "Global num = " << ::x << " (using scope resolution)" << endl;
    my::display();
    cout << "Accessing num from namespace: " << my::x << endl;
    return 0;
}

// iv) Output (example)
/*
    Local num = 50
    Global num = 10 (using scope resolution)
    Inside My, num = 20
    Accessing num from namespace: 20
*/
