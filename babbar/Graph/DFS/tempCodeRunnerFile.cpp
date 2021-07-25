#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;
    cin>>t;
    
    while(t--)
    {
        double  n , k;
        ll count ;
        cin>>n>>k;
       
       ll x = ((n+k)/2);
       if(n==k)
       {
           count = 0;
       }
       else if(n>k)
       {
           count = (ceil((k-(n+1))/2) + ceil(((n+1)-n)/2));
       }
       else
       {
           count = (ceil((k-(n+1))/2) + ceil(((n+1)-n)/2));
       }
       cout<<count<<endl;      

    }
    return 0;
    
}