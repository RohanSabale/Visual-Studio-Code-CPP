#include<bits/stdc++.h>
using namespace std;

int main()
{


     #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif


    int t; cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        int a[n] , b[m];
        set<int>set1;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            //int temp = a[i];
            set1.insert(a[i]);
        }
         for(int i=0;i<m;i++)
        {
            cin>>b[i];
            //int temp = b[i];
            set1.insert(b[i]);
        }
        cout<<set1.size()<<"\n";

    }
}