// 1800. Maximum Ascending Subarray Sum
// Easy

// Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.

// A subarray is defined as a contiguous sequence of numbers in an array.

// A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi < numsi+1. Note that a subarray of size 1 is ascending.

 

// Example 1:

// Input: nums = [10,20,30,5,10,50]
// Output: 65
// Explanation: [5,10,50] is the ascending subarray with the maximum sum of 65.

#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int>&V)
{
    int finalSum = V[0];
    int previous = V[0];
    int sum = V[0];

    for(int i = 1;i<V.size();i++)
    {
        if(previous <V[i])
        {
            sum += V[i];
            previous = V[i];
        }
        else
        {
            sum = V[i];
            previous = V[i];
        }
        finalSum = max(finalSum , sum);
    }
    return finalSum;
    
}
int main()
{
    vector<int> V{10,20,30,5,10,50};
    int k = maxSum(V);
    cout<<k;
}