#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n==k)
    {
        while(n--)
        cout<<"a";
    }
    else if(n<k)
    {
        int g[n] ,sum =n;
        memset(g,0,sizeof(g));
        for(int i=0;i<n && sum<k;i++)
        {
            int j=1;
            while(k>=(sum +pow(2,j+1)-1) && j<25)
                j++;
            sum +=pow(2,j) -1;
            g[i] =j;
        }
        if (sum !=k)
        {
            cout<<"-1\n";
        }
        else
        {
            for(int i=0;i<n ;i++)
            {
                cout<<(char) (g[i] +97);
            }
        }
        
    }
    else
    {
        cout<<"-1";
    }
    cout<<"\n";
    
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}