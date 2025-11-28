/*
i) Question 
    (1b) Find factorial of a given number using recursion.

ii) Description
    This program calculates the factorial of a number using recursion.
    It takes input from the user for the number.
    The recursive function multiplies the number by factorial of (number-1) until 1.
    Finally, it prints the factorial or an error for negative numbers.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int factorial(int x) {
    if (x == 0 || x == 1) 
        return 1;
    return x * factorial(x - 1);
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << x << " = " << factorial(x) << endl;

    return 0;
}

// iv) Output (example)
/*
    Enter a number: 5
    Factorial of 5 = 120
*/
