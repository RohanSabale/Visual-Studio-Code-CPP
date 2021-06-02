#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[k];
    for(int i =0;i<k;i++)
    {
        cin>>arr[i];
    }
    vector<int>V(n+m+1,0);
    for(auto v:arr)
    {
        V[v]++;
    }
    vector<int>ans;
    for(int i = 1;i<=n;i++)
    {
        if(V[i] >1)
            ans.push_back(i);
    }
    int size = ans.size();
    cout<<size;
    for(int i = 0;i<size;i++)
    {
        cout<<" " <<ans[i];
    }
    cout<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}