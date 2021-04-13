// this is only for positive numbers

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n = 7;
    int arr[n] = {1, 101, 2, 3, 100, 4, 5};

    int dp[n] ;
    for(int i = 0;i<n;i++)
    {
        dp[i] = arr[i];
    }
    int omax = 0;
    

    for(int i= 1;i<n;i++)
    {
        int max = 0;
        for(int j =0;j<i;j++)
        {
            if(arr[j] < arr[i])
            {
                if(dp[j] <dp[j] +arr[i])
                {
                    dp[i] = dp[j] + arr[i];
                }
            }
        }
       for(int i = 0;i<n;i++)
       {
        if(dp[i] > omax)
        {
            omax = dp[i];
        }
    }
                   
}
cout<<omax;
}