// this adjacency list matrix creation and printing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;      // no of nodes
    int m;      // no of edges
    cin>>n>>m;

    vector<int>ar[n+1];

     int a,b;
    while(m--)
    {
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    for(int v =0; v<n;v++)
    {
        cout<<"\n Adjacency list of vertex"<<v<<"\n head";
        for(auto x : ar[v])
        {
            cout<<"->"<<x;
        }
        cout<<"\n";
    }
    
}