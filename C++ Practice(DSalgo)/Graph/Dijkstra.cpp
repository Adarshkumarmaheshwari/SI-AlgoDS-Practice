#include "bits/stdc++.h"
using namespace std;
#define V 9

int selectMinVertex(int dis[], bool processed[])
{
    int min = INT_MAX;
    int minIndex;

    for (int i = 0; i < V; i++)
    {
        if (processed[i] == false && dis[i] <= min)
        {
            min = dis[i];
            minIndex = i;
        }
    }
    return minIndex;
}
void printSolution(int dis[])
{
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dis[i]);
}

void dijkstra(int graph[V][V], int src)
{
    int dis[V]; //output Array store shortest distance from src to i
    bool processed[V];

    for (int i{0}; i < V; i++)
    {
        dis[i] = INT_MAX;
        processed[i] = false; //initially it will be false
    }
    dis[src] = 0;

    for (int i{0}; i < V-1; i++)
    {
        int u = selectMinVertex(dis, processed);
        processed[u] = true;
        for (int j = 0; j < V; j++)
        {
            if (processed[j] == false && graph[u][j] && dis[u] != INT_MAX && dis[u] + graph[u][j] < dis[j])
            {
                dis[j] = dis[u] + graph[u][j];
            }
        }
    }
    printSolution(dis);
}

int main()
{

    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    dijkstra(graph, 0);
    return 0;
}