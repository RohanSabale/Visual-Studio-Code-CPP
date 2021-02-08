#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];          // weight 
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
         if(arr[0]<arr[1])
        {
            cout<<"0"<<endl;    // lenght to jump
            
            
        }
       else if (brr[0] ==1)
        {
            cout<<"2"<<endl;
            
        }
        else if(brr[0]>1)
        {
            cout<<"1"<<endl;
            
        }
    }
}