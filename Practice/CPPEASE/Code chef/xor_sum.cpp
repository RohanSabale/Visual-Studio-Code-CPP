#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    //cin>>n;
    n=4;
    int arr[n] = {1,2,3,4};
    /*
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    */
   int q;
   //cin>>q;
   q=2;
   int que[q] ={1,2};
   /*
   for(int i=0;i<q;i++)
   {
       cin>>que[i];
   }
   */
   int ans = 0;
   for(int value : arr)
   {
       ans = ans ^ (2 *value);
   }
   cout<<ans;
   

}