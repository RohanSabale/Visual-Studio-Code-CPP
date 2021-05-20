#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&nums)
{
    int n = nums.size();
    vector<int>out;
    out[0] = nums[0];
    return out[0];
    
}

int main()
{
    vector<int>nums{1,2,3,4};
    cout<<solve(nums);
}