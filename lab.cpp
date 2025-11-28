#include<bits/stdc++.h>
using namespace std;
inline int mul(int x,int y){
    return x*y;
}
int adding(int x,int y){
    return x+y;
}
float adding(float x,float y){
    return x+y;
}
int main(){
    int x,y;
    cout << "Enter the values You Want to multiply : ";
    cin >> x >> y;
    cout << "Multipling result in inline Function is : " << mul(x,y) << endl;
    cout << "Adding integer values : " << adding(2,3) << endl;
    cout << "Adding float values : " << adding(2.5f,2.5f) << endl;
    return 0;
}