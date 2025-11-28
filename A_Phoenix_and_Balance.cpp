#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x[n];
        for(int i=0;i<n;i++) x[i]=pow(2,i+1);
        int a=n/2,sum1=0,sum2=0;
        if(a==1) cout << x[1]-x[0] << endl;
        else{
            swap(x[a-1],x[n-1]);
            for(int i=0;i<n;i++){
                if(i<a) sum1+=x[i];
                else sum2+=x[i];
            }
            cout << sum1-sum2 << endl;
        }
    }
    return 0;
}