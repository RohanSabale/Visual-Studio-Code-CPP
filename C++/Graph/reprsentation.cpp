// representation of graph can be done in two ways
/*
1. adjacency matrix                   this is valid upto 10000 vertices only
2.adjacency list


*/
#include<bits/stdc++.h>
using namespace std;



void addEdge(vector<int> adj[] , int u , int v)
{
    adj[u] .push_back(v);
    adj[v] .push_back(u);
}

void printGraph(vector<int> adj[] , int V)
{
    for(int v=0;v<V;v++)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        
        for(auto x : adj[v])
            cout<<"->" <<x;
            cout<<"\n";
    }
}

int main()
{
    int V=5;
    vector <int> adj[V];
    addEdge(adj,0,1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj , V);
    return 0;
}