#include<bits/stdc++.h>
using namespace std;
template < typename t>
t add(t a,t b){
    return a + b;
}
int main(){
    int x,y;
    float a,b;
    cout << "Enter Two integers : " ;
    cin >> x >> y;
    cout << "Sum of The Integers : " << add(x,y) << endl;
    cout << "Enter two Float : " ;
    cin >> a >> b; 
    cout << "Sum of The Float : " << add(a,b) << endl;
    return 0;
}