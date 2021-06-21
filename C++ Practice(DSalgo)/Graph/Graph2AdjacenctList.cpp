#include<iostream>
#include<vector>
using namespace std;
/*
Advantage
->Saves space O(|V|+|E|)
->adding Edge only takes O(1) time
->Adding a vertex takes O(1) time
Disadvantages
-> Finding Relationship between two vertex is not efficient.
->removing edge O(E) time
*/
//using Array of vectors

#define V 5

void addEdge(vector<int> graph[],int u, int v)
{
    graph[u].emplace_back(v);
}

int main()
{
vector<int> graph[V];

    addEdge(graph,0,1);
    addEdge(graph,0,4);
    addEdge(graph,1,1);
    addEdge(graph,1,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,3,2);
    addEdge(graph,3,4);
    cout<<"Adjacency List"<<endl;
    for(int i{0}; i<V;i++){
        //cout<<i;
        for(int j{0}; j<graph[i].size(); j++){
            cout<<" -> "<<graph[i][j];
        }
        cout<<endl;

    }
    return 0;}