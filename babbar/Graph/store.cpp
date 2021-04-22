#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,E,u,v;
    cin>>n>>E;

    vector<vector<int>>Vec;

    Vec.resize(n+1);

    while(E--)
    {
        cin>>u>>v;
        Vec[u].push_back(v);    // take this only for directed graph
        Vec[v].push_back(u);       // this is for undirected graph as it is 0->1 and 1->0 also
    }
    return 0;
}


// this is for undirected weighted graph
vector<vector<pair<int,int>>Vec;   // first int is node and the other one is weight
int N,E,u,v,weight;
cin>>N>>E;

while(E--)
{
    cin>>u>>v>>weight;
    Vec[u].push_back(make_pair(v,w));
    Vec[v].push_back(make_pair(u,w));
}