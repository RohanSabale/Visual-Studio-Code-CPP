// Topic : Breadth first search

// notes
// 1. BFS is one of the tree/graph traversal algorithm
// 2. when we traverse tree or graph then order in which vertices are visited
// is very important
// 3.BFS traversal algorithm traverse level wise
// 4. BFS uses queue data structure in order to achieve level order traversal
// 5. graph has cycle so we have to keep the track of visited nodes and we 
// should not visit the again. 
// 6.inorder to keep track of visited nodes we keep array of boolean where we
// inititalize every element of array as false 
// meaning non visited , and as we visit some node we make 
// this array element value true. 



// some usage
// 1. shortest path and minimum spanning tree for unweighted graph
// 2. social networking websites
// 3.broadcasting in network
// 4. finding all nodes within one connected component


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Vec;
vector<bool>visited;

void bfs(int node)
{
    queue<int> lst;
    lst.push(node);
    visited[node] = true;
    while(!lst . empty())
    {
        node = lst.front();
        lst.pop();
        cout<<node<<" ";
        for(int i =0;i<Vec[node].size();i++)
        {
            if(!visited[Vec[node][i]])
            {
                lst.push(Vec[node][i]);
                visited[Vec[node][i]] = true;
            }
        }
    }
}

int main()
{
    int N,u,v;
    cin>>N;

    Vec.resize(N+1);
    visited.resize(N+1);

    while(N--)
    {
        cin>>u>>v;
        Vec[u]. push_back(v);
        Vec[v] .push_back(u);
    }
    bfs(1);
    return 0;
}


// 1. push start node in stack and mark it visited
// 2. while queue is not empty
// 3.pop out a node from queue and push all non visited adjacent node 
// of poped node in queue and mark them visited
// 4. go to step 2



// Input
// 6 
// 1 2
// 1 4
// 4 5
// 2 4
// 2 3
// 3 6
// 4 6