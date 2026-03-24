#include <iostream>
#include <climits>
using namespace std;

struct Edge { int u, v, weight; };

void bellmanFord(Edge edges[], int E, int V, int src) {
    int dist[V];
    for (int i = 0; i < V; i++) dist[i] = INT_MAX;
    dist[src] = 0;

    for (int i = 1; i <= V-1; i++)
        for (int j = 0; j < E; j++)
            if (dist[edges[j].u] != INT_MAX &&
                dist[edges[j].u] + edges[j].weight < dist[edges[j].v])
                dist[edges[j].v] = dist[edges[j].u] + edges[j].weight;

    for (int j = 0; j < E; j++)
        if (dist[edges[j].u] != INT_MAX &&
            dist[edges[j].u] + edges[j].weight < dist[edges[j].v]) {
            cout << "Negative weight cycle detected!" << endl;
            return;
        }

    cout << "Vertex\tDistance from Source " << src << endl;
    for (int i = 0; i < V; i++)
        cout << i << "\t" << (dist[i] == INT_MAX ? -1 : dist[i]) << endl;
}

int main() {
    int V = 5, E = 5;

    Edge edges[] = {
        {0,1,2},
        {1,2,3},
        {2,3,1},
        {3,4,2},
        {1,3,-2}
    };

    bellmanFord(edges, E, V, 0);
    return 0;
}

// OUTPUT: 
// 0       0
// 1       2
// 2       5
// 3       0
// 4       2