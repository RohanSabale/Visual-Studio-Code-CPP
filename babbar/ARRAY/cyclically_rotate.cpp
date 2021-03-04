#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

using namespace std;

/*
void cycle_mul_rotate(int a[] , int n)
{
    int x =a[n-1];
    for(int i=n-1;i>0;i--)
        a[i] = a[i-1];
    a[0] =x;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<"\n";
    }
}
*/

void using_temp(int a[] , int n ,int r )
{
    int temp[r];
    for(int i=0;i<r;i++)
        temp[i] = a[i];
    for(int i=r;i<n;i++)
        cout<<a[i]<<" ";
    for(int i=0;i<r;i++)
        cout<<temp[i]<<" ";
}


int main()
{
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int r;
        cin>>r;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        using_temp(a,n,r);
    }
    return 0;
}