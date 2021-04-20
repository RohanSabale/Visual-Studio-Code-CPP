// Given the array nums after the rotation 
//find the pivot element

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {4,5,6,7,0,1,2};
    int x= 0;

    // first we have to find the pivot of array first

    // this below loop below will give the pivot in O(n) time.
    // for(int i =0;i<n;i++)
    // {
    //     if(arr[i] >arr[i+1])
    //     {
    //         cout<<arr[i+1];
    //     }
    // }

    // for finding the pivot in O(logn) time we can use binary search
    int low = 0;
    int high = n-1;
    
    while(low<high)
    {
        int mid =(low +high)/2;

        if(arr[mid]==x)
                return mid;

        if(arr[mid] <arr[high])
        {
            high  = mid;
        }
        else if (arr[mid] >arr[high])
        {
            low = mid +1;
        }
    }
   cout<<-1;
    //cout<<arr[high];           both is same
}