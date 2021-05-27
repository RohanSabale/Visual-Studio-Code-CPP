#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Vec;
vector<int>visited;

bool isCyclicUtil(vector<vector<int>>Vec , vector<int>visited , int curr)
{
    if(visited[curr] == 2)
    {
        return true;
    }
    
    visited[curr] = 1;
    bool FLAG = false;
    for(int i = 0;i<Vec[curr].size();i++)
    {
        if(visited[Vec[curr][i]] == 1)
            visited[Vec[curr][i]] = 2;
        else
        {
            FLAG = isCyclicUtil(Vec,visited,Vec[curr][i]   );
            if(FLAG == true)
                return true;
        }
    }
    return false;
}


bool isCyclic(vector<vector<int>> Vec , int N)
{
    bool FLAG = false;
    for(int i = 0;i<N;i++)
    {
        visited[i] = 1;
        for(int j = 0;j<Vec[i].size();i++)
        {
            FLAG = isCyclicUtil(Vec , visited , Vec[i][j]  );
            if(FLAG == true)
                return true;
        }
        visited[i] = 0;
    }
    return false;
}

int main()
{
    int N,E,u,v;
    cin>>N>>E;
    Vec.resize(N);
    visited.resize(N);

   for(auto i : Vec)
   {
       cin>>u>>v;
        Vec[u].push_back(v);
        Vec[v].push_back(u);
   }

   cout<<isCyclic(Vec , N)<<endl;

}