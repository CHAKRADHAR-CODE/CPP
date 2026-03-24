#include<bits/stdc++.h>
using namespace std;
int sort(vector<int> &x,int low,int high){
    int p = x[high];
    int i = low-1;
    for(int j = low;j<high;j++){
        if(x[j] < p){
            i++;
            swap(x[i],x[j]);
        }
    }
    swap(x[i+1],x[high]);
    return i+1;
}
void quick(vector<int> &x,int low,int high){
    if(low<high){
        int p = sort(x,low,high);
        quick(x,low,p-1);
        quick(x,p+1,high);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++) cin >> x[i];
    quick(x,0,n-1);
    for(int y:x) cout << y << " ";
    cout << endl;
    return 0;
}