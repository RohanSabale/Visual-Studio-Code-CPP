#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Vec;
vector<bool>visited;


void solve()
{
    
}


int main()
{
    int n , u,v;
    cin>>n;
    Vec.resize(n+1);
    int s = n-1;
    while(s--)
    {
        cin>>u>>v;
        Vec[u].push_back(v);
    }
    int q;
    cin>>q;
    vector<int>query;

    while(q--)
    {
        int k;
        cin>>k;
        query.resize(k+1);
        for(int i = 0;i<k;i++)
        {
            int ka;
            cin>>ka;
            query.push_back(ka);
            solve();
        }
    }
}