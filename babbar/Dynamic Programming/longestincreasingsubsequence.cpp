#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n = 10;
    int arr[n] = {10,22,9,33,21,50,41,60,80,3};

    int dp[n] ;
    int omax = 0;
    

    for(int i= 0;i<n;i++)
    {
        int max = 0;
        for(int j =0;j<i;j++)
        {
            if(arr[j] <arr[i])
            {
                if(dp[j] >max)
                {
                    max = dp[j];
                }
            }
        }
        dp[i] = max +1;

        if(dp[i] > omax)
        {
            omax = dp[i];
        }
    }
    cout<<omax;                // dp = {10,22,33,50,60,80}
}