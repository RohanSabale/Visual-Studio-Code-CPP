// here we have to find the maximum subarray with at least size k
// variation of kadane algorithm
// this is also related to sliding window problems

#include<bits/stdc++.h>
using namespace std;

int max_sum_k_element(int arr[] , int n, int k)
{
    int ans =INT_MIN;      // it cannot store value less than -2147483648. so if we initialize with zero it  will give error as its limit is specific
    // similarly for storing max value we can use INT_MAX these are macro 
    //  value of INT_MAX is +2147483647
    // value of INT_MIN is   -2147483648.
    int max_sum[n] ;
    
    int csum  = arr[0];
    max_sum[0] =csum;
    for(int i =1;i<n;i++)
    {
        if(csum>0)
        {
            csum+=arr[i];
        }
        else{
            csum =arr[i];
        }
        max_sum[i] =csum;
    }
    int exactk = 0;
    for(int i=0;i<k;i++)
    {
        exactk += arr[i];
    }

    if(exactk>ans){
        ans = exactk;
    }

    for(int i=k;i<n;i++)
    {
        exactk = exactk + arr[i] - arr[i-k];

         if(exactk>ans){
        ans = exactk;
    }
    int morethank = max_sum[i-k]  + exactk;
    if(morethank >ans)
    {
        ans = morethank;
    }
    }
    return ans;
}


int main()
{
    int arr[] ={1,2,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k  = 3;
    int kad = max_sum_k_element(arr,n,k);
    cout<<kad;
}