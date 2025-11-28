#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout << "Enter Two Digits : ";
    cin >> a >> b;
    try{
        if(b==0) throw "Divisior by zero error!";
        else if(a<0 || b<0) throw -1;
        cout << "Result: " << a / b << endl;
    }
    catch(const char* m){
         cout << "Exception caught: " << m << endl;
    }
    catch(int e){
        cout << "Exception caught: Negative number (" << e << ")" << endl;
    }
    return 0;
}