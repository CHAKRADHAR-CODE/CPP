#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++) cin >> x[i];
    sort(x,x+n,less<int>());
    cout << "min : "<< x[0]+x[1] << endl << "max : " << x[n-1]+x[n] << endl;
    return 0;
}