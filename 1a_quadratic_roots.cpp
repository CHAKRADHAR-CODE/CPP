#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    double d = (b*b) - (4*a*c);

    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2*a);
        double r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    } else if (d == 0) {
        double r = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << r << endl;
    } else {
        double r = -b / (2*a);
        double imag = sqrt(-d) / (2*a);
        cout << "Roots are complex and imaginary." << endl;
        cout << "Root 1 = " << r << " + " << imag << "i" << endl;
        cout << "Root 2 = " << r << " - " << imag << "i" << endl;
    }

    return 0;
}