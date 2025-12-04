#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z,sum=0;
	    cin >> x >> y >> z;
	    while(x!=0 && y!=0 && z != 0){
	        sum += 10;
	        x--;
	        y--;
	        z--;
	    }
	    int a = x+y+z;
	    sum += a*3;
	    cout << sum << endl;
	}
}
