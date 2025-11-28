// 3. Defining Member Function
// Problem: Create a class Rectangle with length and breadth. Define member functions to calculate area and perimeter.
#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
        float length,breadth;
    void display(){
        cout << endl << "AREA OF RECTANGLE : " << length*breadth << endl << "PERIMETER OF RECTANGLE : " << 2*(length+breadth) << endl;
    }
};
int main(){
    int n;
    cout << "ENTER HOW MANY TEST CASE YOU HAVE : ";
    cin >> n;
    Rectangle s[n];
    for(int i=0;i<n;i++){
        cout << endl <<  "ENTER THE DETAILS OF FIRST TEST CASE : " << i+1 << endl;
        cout << "ENTER THE LENGTH : "; cin >> s[i].length;
        cout << "ENTER THE BREADTH : "; cin >> s[i].breadth;
        cout << "OUTPUT : " << endl;
        s[i].display();
    }
}