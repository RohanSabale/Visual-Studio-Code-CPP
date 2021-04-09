#include<bits/stdc++.h>
using namespace std;


int  subarraysum(int arr[], int n, int x)
{
    int current_sum = arr[0],start = 0;

    for(int i=1;i<=n;i++)
    {
        while(current_sum >x && start <i-1)
        {
            current_sum = current_sum - arr[start];
            start++;
        }

        if(current_sum == x)
        {
            cout<<"sum found between indexes"<<start<<"and"<<i-1;
            return 1;
        }

        if(i<n)
        {
            current_sum = current_sum + arr[i];
        }
    }
    cout<<"No subarray found";
    return 0;
}



int main()
{
    int arr[8] = {1,3,2,5,1,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x= 8;
    subarraysum(arr,n,x);
    return 0;
}