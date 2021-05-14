// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].


#include<bits/stdc++.h>
using namespace std;
 
auto Sorted_square(vector<int>V)
{
    int n = V.size();
    int start =0 ;
    for(int i=0 ;i<n;i++)
    {
        if(V[i] >=0)
        {
            start = i;
            break;
        }
    }

    vector<int>ans;
    int other = start - 1;
    while(other>=0 || start <n)
    {
        int left  =INT_MAX;
        int right  =INT_MAX;
        if(other>=0)
        {
            left  = V[other] * V[other];

        }
        if(start<n)
        {
            right = V[start] * V[start];
        }
        if(left<right)
        {
            ans.push_back(left);
            other--;
        }
        else
        {
            ans.push_back(right);
            start++;
        }
    }
    for(auto v : ans)
    {
        cout<<v<<"\n";
    }

}

 int main()
 {
     vector<int> V{-4,1,0,3,10};
    Sorted_square(V);
    return 0;
    
 }