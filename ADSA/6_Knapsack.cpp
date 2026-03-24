// 6. Write a program to implement 0/1 Knapsack problem using Dynamic Programming approach.
#include<bits/stdc++.h>
using namespace std;
int sack(vector<int> w,vector<int> v,int W,int N){
    int dp[100][100];
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++){
            if(j==0 || i==0) dp[i][j] = 0;
            else if(w[i-1]<=j) dp[i][j] = max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][W];
}
int main(){
    vector<int> val = {10, 15, 40};
    vector<int> wt = {1, 2, 3};
    int W = 5;
    int n = 3;
    cout << "Maximum Profit: " << sack(wt, val,W, n);
    return 0;
}
//output : Maximum Profit: 55