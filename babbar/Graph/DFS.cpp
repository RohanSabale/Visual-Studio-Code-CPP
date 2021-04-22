// notes
// 1. DFS is an algorithm for traversing a tree/graph
// 2. DFS uses stack or we can use recursive approach

// Applications of  DFS 
// 1. to find minimum spanning tree and all pair shortest path tree
// 2. detecting cycle in a graph
// 3. path finding
// 4. topological sorting
// 5. to test graph is bipartite
// 6. find strongly connected component of a graph
// 7. maze related problem (find the shortest path)

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Vec;
vector<bool>visited;


void dfs_r(int s)           // this is an recursive way
{
    visited[s] = true;
    cout<<s<<" ";
    for(int i =0;i<Vec[s].size();i++)
    {
        if(visited[Vec[s][i]] == false)
        {
            dfs_r(Vec[s][i]);
        }
    }
}

void dfs(const vector<vector<int>>& Vec , int s)            //this is an iterative way of doing
{
    stack<int>Stk;
    Stk.push(s);
    visited[s] = true;
    
    while(!Stk.empty())    // checks stack is empty or not 
    {
        int node = Stk.top();
        Stk.pop();

        cout<<node <<" ";

        for(int i =0;i<Vec[node].size();i++)
        {
            if(!visited[Vec[node][i]])     // here it checks we have already visitd that node or not if not then it goes inside
            {
                Stk.push(Vec[node][i]);
                visited[Vec[node][i]] = true;
            }
        }
    }
}

void initialize()                  // this just initialize the whole visited vector as false first , here we can also use memset
{
    for(int i =0;i<visited.size();i++)
    {
        visited[i] = false;
    }
}

int main()
{
    int n,m,a,b;
    cin>>n>>m;
    Vec.resize(n+1);
    visited.resize(n+1);

    for(int i =0 ;i<m;i++)
    {
        cin>>a>>b;
        Vec[a].push_back(b);
        Vec[b].push_back(a);
    }

    initialize();
    dfs(Vec,1);
    //dfs_r(1);
    return 0;

}

// steps
// 1. here data structure we are using vector of 
// vector that is similar to 2d matrix
// 2.push start node in stack and mark it visited.
// 3. while stack is not empty
// 4. pop out a node from stack and push all non-visited
// adjacent node of popped node in stack
// and mark them visited.
// 5. go to step 2



// Input
// 6 7
// 1 2
// 1 4
// 4 5
// 2 4
// 2 3
// 3 6
// 4 6