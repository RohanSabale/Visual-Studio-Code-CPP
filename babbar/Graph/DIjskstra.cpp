// single sorce shortest path 

// mark all vertices as unvisited initially
// mark all nodes with infinity distance initially except source node

// repeat the following for(v-1) times:
// 1.pick the min value node which is unprocessed
// 2. Mark this node as processed(u-->v)
// 3. update all adjacent vertices 
//     if cost[u] + wt[u,v] < cost[v]  update
//     else skip

// if labels are sequential then array is prferrable
// if labels are non sequential then set is msotly preferrable

// requrements
// 1. use a  visited array /set.
// 2. use value array / map
// 3. store shortest path graph.
//     use parent array 

//     u--> v     parent [v] = u


// time complexity - O(v^2)      simple implementation
//                                 O(Elog V)       adj list + min - heap

#include<bits/stdc++.h>
using namespace std;

void dijkstra(int graph[v][v])
{
    int parent[V] ;         // shortest path structure
    vector<int> value(V,INT_MAX);        // keeps shortest path values to each
    // vertex from source
    vector<bool>processed(V,false);             // TRUE-> vertex is processed

    // assuming start point as node   = 0
    parent [0] = -1;        // start node has no parent 
    value[0] = 0;               //start node has values = 0 to get picked 1st

    // include (V-1) edges to enter all V- vertices
    for(int i = 0;i<V;i++)
    {
        //select best vertex by applying greedy method
        int u = selectMinVertex(value , processed);
        processed[u] = true;        // include new vertex in shortest path path graph

        // relax adjacent vertices (not yet included in shortest path graph)
        for(int j = 0;j<V;j++)
        {
            /*
            3 conditions to relax:
                1. Edge is present from u to j.
                2. vertex j is not included in shortest path graph
                3.Edge weight is smaller than current edge weight.
            */
           if(graph[u][j]! =0 && processed[j] == false && value[u] = INT_MAX
           && value[u]+ graph[u][j]<value[j])
           {
               value[j] = value[u] + graph[u][j];
               parent[j] = u;
           }
        }
    }

}


int main()
{
    int grpah[v][v] = {{0,1,4,0,0,0},
                                {1,0,4,2,7,0},
                                {4,4,0,3,5,0},
                                {0,2,3,0,4,6},
                                {0,7,5,4,0,7},
                                {0,0,0,6,7,0}};
    dijkstra(graph);
    return 0;
}