#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums{1,2,1,1,3};

    vector<int>ans(nums.size()+1);
    int count =0;
    for(auto i : nums)
    {
        count += ans[i]++;
    }
    for(auto i : ans)
    {
        cout<<i<<endl;
    }
}