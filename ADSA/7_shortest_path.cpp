// 7	Write a program to implement all pairs shortest path problem using Dynamic Programming approach.
#include<bits/stdc++.h>
using namespace std;
void f(vector<vector<int>> &g,int n){
    vector<vector<int>> dp = g;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k=0;k<n;k++){
                if(dp[j][i] != INT_MAX && dp[i][k] != INT_MAX && dp[j][i]+dp[i][k] < dp[j][k]) dp[j][k]= dp[j][i]+dp[i][k];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dp[i][j] == INT_MAX) cout << "INF ";
            else cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n = 3;
    int i = INT_MAX;
    vector<vector<int>> g = {
        {0,2,5},
        {2,0,3},
        {5,3,0}
    };
    f(g,n);
    return 0;
}