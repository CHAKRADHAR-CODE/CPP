#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int m,n,x,d=0,c0=0,c1=0;
	    cin >> m >> n;
	    cin >> x;
	    int i=n,j=m-n;
	    while(i!=0){
	        d=x%10;
	        if(d==0) c0++;
	        else c1++;
	        i--;
	        x/=10;
	    }
	    if(c0==c1){
	        if(j % 2 ==0 || j == 0) cout << "Yes" << endl;
	        else{
	            if(c0>c1){
	                int a=c0-c1;
	                if(j<a) cout << "No" << endl;
	                else {
	                    c1+=a;
	                    j=j-a;
	                    if(j%2==0 || j==0) cout << "Yes" << endl;
	                    else cout << "No" << endl;
	                }
	                
	            }
	            else{
	                int a=c1-c0;
	                if(j<a) cout << "No" << endl;
	                else {
	                    c0+=a;
	                    j=j-a;
	                    if(j%2==0 || j==0) cout << "Yes" << endl;
	                    else cout << "No" << endl;
	                }
	            }
	        }
	    }
	}
	return 0;
}