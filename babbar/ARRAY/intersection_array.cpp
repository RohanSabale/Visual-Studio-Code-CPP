#include<bits/stdc++.h>
using namespace std;


void intersection()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }

    set<int>hs;

    for(int i = 0;i<n;i++)  hs.insert(arr[i]);
    for(int i = 0;i<m;i++)
    {
        if(hs.find(brr[i]) != hs.end())
        {
            cout<<brr[i]<<" ";
        }
    }











}

int main()
{

      #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        intersection();
        return 0;
    }

}
