#include<bits/stdc++.h>
using namespace std;


void initialize()
{
    for(int i = 0;visited.size();i++)
    {
        visited[i] = false;
    }
}

int main()
{
    int N,E,u,v;
    cin>>N>>E;

    vector<vector<int>>Vec;
    vector<bool>visited;
    initialize();

    Vec.resize(N+1);

    while(E--)
    {
        cin>>u>>v;
        Vec[u].push_back(v);
        Vec[v].push_back(u);
    }
    return 0;
}