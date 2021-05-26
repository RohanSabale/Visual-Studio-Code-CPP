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

bool dfs_cycle(int s)
{
    visited[s] = true;
    for(int i = 0;i<Vec[s].size() ;i++)
    {
        if(visited[Vec[s][i]] == false)
        {
            if(dfs_cycle(Vec[s][i]) == true)
            {
                return true;
            }
        }
        else
        {
            if(s!=Vec[s][i])
            {
                return true;
            }
        }
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
    cout<<dfs_cycle(0);


}