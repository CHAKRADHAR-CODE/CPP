#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int x[n],y[n];
        for(int i=0;i<n;i++) cin >> x[i] >> y[i];
        int z=x[0];
        for(int i=1;i<n;i++){
            if(x[i] > z) z=x[i];
        }
        int sum = z;
        m-=1;
        while(m--){

        }
    }
}

1 2 3 = 3
2 4 6 = 2
0 6 3 = 6
1 0 6 = 6

3+2+6+6=17







