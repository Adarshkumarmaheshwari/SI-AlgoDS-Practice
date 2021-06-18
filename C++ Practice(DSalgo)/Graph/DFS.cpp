#include "bits/stdc++.h"
using namespace std;
#define V 7

void DFS(vector<int> graph[], int start)
{
    bool check[] = {false};
    stack<int> q;
    q.push(start);
    check[start] = true;
    while (!q.empty())
    {
        int curr = q.top();
        cout<<curr<<" ";
        q.pop();
        for (int i{0}; i < graph[curr].size(); i++)
        {
            if (!check[graph[curr][i]])
            {
                q.push(graph[curr][i]);
                check[graph[curr][i]] = true;
            }
        }
    }
}

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].emplace_back(v);
    graph[v].emplace_back(u);
}

int main()
{
    vector<int> graph[V];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 6);
    addEdge(graph, 3, 4);
   
    DFS(graph,0);
    return 0;
}