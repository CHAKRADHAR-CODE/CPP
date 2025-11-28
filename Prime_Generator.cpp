#include <bits/stdc++.h>

using namespace std;

bool primeGen(int n) {
    // complete the funciton
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i=3; i*i <= n; i+=2) {
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    // complete the funciton
    int t;
    cin >> t;
    while(t--){
        int a,n;
        cin >> a >> n;
        for(int i=a;i<=n;i++){
            if(true == primeGen(i)) cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}