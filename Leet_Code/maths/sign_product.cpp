// 1822. Sign of the Product of an Array
// Easy

// There is a function signFunc(x) that returns:

//     1 if x is positive.
//     -1 if x is negative.
//     0 if x is equal to 0.

// You are given an integer array nums. Let product be the product of all values in the array nums.

// Return signFunc(product).

 

// Example 1:

// Input: nums = [-1,-2,-3,-4,3,2,1]
// Output: 1
// Explanation: The product of all values in the array is 144, and signFunc(144) = 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums{-1,-2,-3,-4,3,2,1};

    int count  =0;
    for(auto i : nums)
    {
        if(i<0)
        {
            count++;
        }
        if(i =='0')
        {
            return 0;
        }
    }
    if(count % 2 ==0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}