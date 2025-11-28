#include<bits/stdc++.h>
using namespace std;
inline int mul(int x){
    return x*x;
}
int add(int x, int y){
    return x+y;
}
float add(float x,float y){
    return x+y;
}
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Square of " << x <<" is " <<  mul(x) << endl;
    cout << "Adition of Integers : " << add(10,20) << endl;
    cout << "Adition of floting : " << add(2.5f,2.5f) << endl;
    return 0;
}