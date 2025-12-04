#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,c;
	    cin >> n >> c;
	    int x[n];
	    for(int i=0;i<n;i++) cin >> x[i];
	    string y;
	    cin >> y;
	    int sum0 = 0;
	    int sum1 = 0;
	    for(int i = 0; i<n ; i++){
	        if(y[i]=='0') sum0 += x[i];
	        else sum1 += x[i];
	    }
	    if(sum0 < c) cout << sum0 << endl;
	    else{
	        int z = (sum0-c)+sum1;
	        cout << max(sum0,z) << endl;
	    }
	}
}
