#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n;
        cin>>n;
        ll mn = INT_MAX ,  mx = INT_MIN;
        ll x ,y;
        ll arr[n];

        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i] < mn)
            {
                mn = arr[i];
                x = i;
            }
            if(arr[i] >mx)
            {
                mx = arr[i];
                y = i;
            }
        }
        x+=1;
        y+=1;
        ll a,b,c;
        a = max(x,y);
        b = max(n-x , n-y )+1;
        c=  min(x,y) + n - max(x,y) + 1;
         
        cout<<min(a,min(b,c))<<endl;
    }
    
}