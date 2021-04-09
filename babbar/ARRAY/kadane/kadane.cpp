#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int kadane(int arr[] , int n)
{
    int csum = arr[0];    // at the start of the train
    int osum =  arr[0];   // at the start of the train first number will be the max

    for(int i=0;i<n;i++)
    {
        if (csum>=0){      // if the train from behind is positive then it will step up in the train
            csum+=arr[i];
        }else{
            csum = arr[i]; // if the train behind is negative (in debt) he will start his own train 
        }
        if(csum>osum){    // if csum exceeds the overall sum here it wiil change the overall max 
            osum =csum;
        }
    }
    return osum;    // returning the max overall sum of the array
}

int main()
{
    /* 
     boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
    */


    
    int arr[] = {52,77,95,46,-70,-10,9,82,83,-32};
    int n = sizeof(arr)/sizeof(arr[0]);
    
   int k = kadane(arr,n);
    cout<<k;
    return 0;


    /*
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    */

   // int k = kadane (arr,n);
    cout<<k;
    return 0;
    
}