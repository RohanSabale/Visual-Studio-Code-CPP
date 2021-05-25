// cycle detection in graph in directed graph using backtracking and degrees of nodes.


#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

vector<vector<int>>Vec;
vector<bool>visited;

void initialize()
{
    for(int i = 0;i<visited.size();i++)
    {
        visited[i] = false;
    }
}

bool isCycleUtil(vector<vector<int>>Vec , vector<bool>visited , int curr)
{
    if(visited[curr] = true)
    {
        return true;
    }
    visited[curr]  = true ; 
    bool FLAG = false;
    for(int i = 0;i<Vec[curr].size() ; i++)
    {
        FLAG = isCycleUtil(Vec , visited , Vec[curr][i]);
        if(FLAG ==true)
        {
            return true;
        }
    }
    return false;
}

bool cycleDirected(int N , vector<vector<int>>Vec)
{
    bool FLAG = false;
    for(int i = 0;i<N;i++)
    {
        visited[i] = true;
        for(int j = 0;j<Vec[i].size();j++)
        {
            FLAG = isCycleUtil(Vec, visited , Vec[i][j]);
            if(FLAG == true)
            {
                return true;
            }
        }
        visited[i] = false;
    }
    return false;
}

int main()
{
    // boost;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt" ,"r" ,stdin);
    // freopen("output.txt" , "w" ,stdout);
    // #endif

    int N,E,u,v;
    cin>>N>>E;

    Vec.resize(N+1);

    visited.resize(N+1);
    initialize();

    for(auto i : Vec)
    {
        cin>>u>>v;
        Vec[u].push_back(v);
    }

    cout<<cycleDirected(N,Vec);
}