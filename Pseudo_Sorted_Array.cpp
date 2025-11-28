#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--){
        int n,c=0,z;
        cin >> n;
        int x[n];
        for(int i=0;i<n;i++) cin >> x[i];
        for(int i=0;i<n-1;i++){
            if(x[i] > x[i+1]){
                z=x[i];
                swap(x[i],x[i+1]);
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(x[i] > x[i+1]) c++;
        }
        if(c>0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}