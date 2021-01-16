#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int height[n+1];
        int suffix[n+1];
        int dp[n+1][k+1];

        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        sort(height,height + n);
        suffix[n] = 0;
        
    }
}