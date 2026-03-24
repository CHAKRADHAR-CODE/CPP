//5	Write a program to implement Single Source Shortest Paths using greedy approach.

#include<bits/stdc++.h>
using namespace std;

#define V 4
#define INF 9999

int mind(vector<int> &d,vector<bool> &v){
    int min = INF,min_index=-1;
    for(int i=0;i<V;i++){
        if(!v[i] && d[i] <= min){
            min = d[i];
            min_index = i;
        }
    }
    return min_index;
}
void dij(int g[V][V],int src){
    vector<int> d(V,INF);
    vector<bool> v(V,false);
    d[src] = 0;
    for(int i = 0;i<V-1;i++){
        int u = mind(d,v);
        v[u] = true;
        for(int j = 0;j<V;j++){
            if(!v[j] && g[u][j] && d[u]+g[u][j] < d[j]) d[j] = d[u]+g[u][j];
        }
    }
    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i << "\t" << d[i] << endl;
}
int main(){
    int g[V][V]={
        {0,1,4,0},
        {1,0,2,5},
        {4,2,0,1},
        {0,5,1,0}
    };
    dij(g,0);
    return 0;
}
//output : 0 1 3 4