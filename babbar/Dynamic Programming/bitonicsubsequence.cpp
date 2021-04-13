//  the numbers first increases and then start decreasing from certain point
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n = 10;
    int arr[n] = {10,22,9,33,21,50,41,60,80,3}; 
    
     int dp[n] ;
    for(int i= 0;i<n;i++)
    {
        int max = 0;
        for(int j =0 ;j<i; j++)
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
    }



    int lds[n] ;
    for(int i= n-1;i>=0;i++)
    {
        int max = 0;
        for(int j =n-1 ;j>i; j--)
        {
            if(arr[j] <=arr[i])
            {
                if(lds[j] >max)
                {
                    max = lds[j];
                }
            }
        }
        lds[i] = max +1;
    }

    int omax = 0;
    for(int i = 0;i<n;i++)
    {
        if((dp[i] + lds[i] -1 )>omax)
        {
            omax = dp[i]  +  lds[i] - 1;
            
        }
       
    }
    cout<<omax;
    
         
}