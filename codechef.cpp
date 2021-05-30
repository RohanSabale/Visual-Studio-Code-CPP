#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k,f;
    cin>>n>>k>>f;
    int total = 0;
    int s,e;
    for(int i = 0;i<n;i++)
    {   int sub  = 0;
        cin>>s>>e;
        sub = e-s;
        total+=sub;
    }
    if(k>=f)
    {
      cout<<"no"<<endl;  
    }
    else
    {
        if(f-total>=k)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
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