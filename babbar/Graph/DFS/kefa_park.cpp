#include<bits/stdc++.h>
using namespace std;


void dfs(vector<int>*edges , int start, int* vis, int m , int count ,int arr[] )
{
    vis[start] = 1;
    for(int i = 0;i<edges[start].size();i++)
    {
        int temp = edges[start][i];
        int cc = count;
        if(vis[temp] == 0)
        {
            if(arr[temp] == 1 && arr[start] == 1)
            {
                cc+=1;
            }
            else if(arr[temp] == 1)
            {
                cc = 1;
            }
            else
            {
                cc = 0;
            }
            if(cc > m)
            {
                continue;
            }
            dfs(edges , temp , vis ,m ,cc ,arr);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    #endif

    int n , m;
    cin>>n>>m;
    vector<int>*edges = new vector<int>[n];
    int* arr = new int[n]();
    int* vis = new int[n]();
    
   

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