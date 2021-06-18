#include "bits/stdc++.h"
using namespace std;
/*
Undirected graph
------------------
connected edge -> 1
Not connected edge ->0

Directed Graph
------------------
Outgoing edge -> 1
incoming edge -> -1
No Edge -> 0

Disadvantages
It uses O(VE) space
it is worst than adjacency matrix to check related nodes
LOGIC
When there is incoming edge we will put -1
else 1 
*/

#define V 5
#define E 8

void addEdge(int graph[V][E], int u, int v, int e)
{
    graph[u][e] = 1; 
    if (u != v) //end and start is different so it is not loop
        graph[v][e] = -1; //end vertice edge
}
int main()
{
    int graph[V][E] = {0};
    //start, end, edge
    addEdge(graph, 0, 1, 0);
    addEdge(graph, 0, 4, 1);
    addEdge(graph, 1, 1, 2);
    addEdge(graph, 1, 2, 3);
    addEdge(graph, 1, 3, 4);
    addEdge(graph, 1, 4, 5);
    addEdge(graph, 3, 2, 6);
    addEdge(graph, 3, 4, 7);

    cout << "Adjacency List" << endl;
    for (int i{0}; i < V; i++)
    {
        for (int j{0}; j < E; j++)
            cout << graph[i][j] << "   ";
        cout << endl;
    }
}