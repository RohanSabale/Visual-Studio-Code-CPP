// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.


// Example 1:

// Input:
// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int arr[n] = {1,5,7,1};
    int k = 6;

    // int count  =0;
    // for(int i =0;i<n;i++)
    // {
    //     for (int j =i+1;i<n;j++)                     // this will give result in O(n2) time
    //     {
    //         if(arr[i+1] +arr[j+1] == k)
    //         {
    //             count ++;
    //         }
    //     }
    // }
    // cout<<count;

    int count  =0;
    unordered_map<int , int> m;

    for(int i =0;i<n;i++)
    {
        int x = k - arr[i];

        if(m[x] == 0)
        {
            m[arr[i]] ++;
        }
        else
        {
            count+=m[x];
            m[arr[i]] ++;

        }
    }
    cout<<count;
}