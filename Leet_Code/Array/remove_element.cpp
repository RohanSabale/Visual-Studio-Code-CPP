// 27. Remove Element
// Easy

// Given an array nums and a value val, remove all instances of that value in-place and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// The order of elements can be changed. It doesn't matter what you leave beyond the new length.

// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2]
// Explanation: Your function should return length = 2, with the first two elements of nums being 2.
// It doesn't matter what you leave beyond the returned length. For example if you return 2 with nums = [2,2,3,3] or nums = [2,2,0,0], your answer will be accepted.



#include<bits/stdc++.h>
using namespace std;

int remove_element(vector<int>&V , int k)
{
    int n = V.size();
    int j = 0;
    for(int i = 0;i<n;i++)
    {
        if(V[i] != k)
        {
            V[i]  = V[k];
            j++;
        }
    }
    return j;
}

int main()
{
    vector<int>V{3,2,2,3};
    int k = 3;
    remove_element(V,k);
    
}