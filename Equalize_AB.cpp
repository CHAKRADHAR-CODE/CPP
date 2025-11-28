#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,x;
        cin >> a >> b >> x;
        if(a == b) cout << "YES" << endl;
        else{
            if(a > b){
                while(a>b){
                    a=a-x;
                    b=b+x;
                }
                if(a==b) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else{
                while(a<b){
                    a=a+x;
                    b=b-x;
                }
                if(a==b) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
    return 0;
}
