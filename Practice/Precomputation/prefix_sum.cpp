/*
Given array a of N integers . Given Q queries and in each query given l and r print sum of 
array elements from index l to r(l,r included)

Constraints 
1<=N<=10^5
1<=a[i] <=10^9
1<=Q<=10^5
1<=L,R<=N
*/


/*

// normal solution

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int a[N];


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)      // use 1 based loop for not using l-- and r++       
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        long long sum=0;
        for(int i=l;i<=r;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;

    }
}
*/


// optimised way of solving
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int a[N];
int pf[N];


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)      // use 1 based index for not using l-- and r++       
    {
        cin>>a[i];
        pf[i] =pf[i-1] + a[i]; 
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
       
        cout<<pf[r] - pf[l-1]<<endl;

    }
}




