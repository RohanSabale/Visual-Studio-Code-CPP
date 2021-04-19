// Given an array Arr of N positive integers. Your task is 
// to find the elements whose value is equal to that 
// of its index value.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n = 5;
    int arr[n] = {15, 2, 45, 12, 7};
    int x = 2;
    
    vector<int>V;
    for(int i =0;i<n;i++)
    {
        if(arr[i] ==i+1)
        {
            V.push_back(arr[i]);
        }
    }
    for(auto v:V)
    {
        cout<<v<<" ";
    }
}