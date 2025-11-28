#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout << "Enter Two Digits : ";
    cin >> a >> b;
    try{
        if(b==0) throw b;
        cout << "Result : " << a/b << endl;
    }
    catch(int e){
         cout << "Exception caught! Division by " << e << " is not allowed." << endl;
    }
}