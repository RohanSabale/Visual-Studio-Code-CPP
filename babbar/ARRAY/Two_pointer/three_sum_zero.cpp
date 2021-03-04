/*
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? 
Find all unique triplets in the array which gives the sum of zero.
*/

// this is brute force approach
/*
#include<bits/stdc++.h>
using namespace std;

void triplet(int arr[] , int n)   // this is brute force approach it takes O(n^3) complexity.  
{
    bool found = false;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;i<n-1;j++)
        {
            for(int k =j+1;k<n;k++)
            {
                if (arr[i] + arr[j] + arr[k] ==0)
                {
                    cout<<arr[i]<<" ";
                    cout<<arr[j] <<" ";
                    cout<<arr[k] <<" ";
                    bool found =true;
                }
            }
        }
    }
    if (found == false)
    {
        cout<<"not exist"<<endl;
    }

}



int main()
{
    int arr[5] ={0,-1,2,-3,1};
    int n =sizeof(arr ) /sizeof(arr[0]);
    triplet( arr ,  n);
    return 0;
}

*/

// optimised solution using two pointer approach

#include<bits/stdc++.h>
using namespace std;

auto two_sum(int a[] , int x , int i )
{
    int p = *(&a+ 1) - a;
    int j = p - 1;
    while(i<j)
    {
        if(a[i] + a[j] >x)
        {
            j--;
        }
        if (a[i] +a[j] <x)
        {
            i++;
        }
        //else
        //  return true;
    }
    return true;
    
}

auto findtriplet(int arr[] , int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        if(two_sum(arr,-arr[i] , i+1))
        {
            return true;
        }
    }
    return false;

}



int main()
{
    int arr[5] ={0,-1,2,-3,1};
    int n =sizeof(arr ) /sizeof(arr[0]);
    findtriplet( arr ,  n);
    

}