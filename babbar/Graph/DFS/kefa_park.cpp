#include<bits/stdc++.h>
using namespace std;


void bfs(vector<vector<int>>&edges , int start ,  )

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    #endif

    int n , m;
    cin>>n>>m;
    vector<vector<int>>edges(n);
    
    int arr[n];
    int vis[n];

    for(int i = 0;i<n ;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<n-1 ;i++)
    {
        int l , r;
        cin>>l>>r;
        edges[l-1].push_back(r-1);    // l-1 and r-1 because of 0 based indexing
        edges[r-1].push_back(l-1);
    }

    int count = 0;
    if(arr[0] == 1)
    {
        count = 1;
    }
    dfs(edges , 0 , vis , m , count , arr);

    int ans = 0;
    for(int i = 0;i<n ;i++)
    {
        if(vis[i] == 1 && edges[i].size() == 1  && i!=0)    // edges[i].size() == 1 because leaf has only one parent above
        // i!= 0 means it should be not root node
        {
            ans++;

        }
    }
    cout<<ans<<endl;



    return 0;

}