#include<bits/stdc++.h>
using namespace std;


int fo(int arr[] , int n , int x)
{
    int start = 0;
    int end = n-1;
    int ans=-1;
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] >x)
        {
            end= mid -1;
        }
        else
        {
            start = mid + 1;
        }

    }
return ans;
}



int main()
{
    int arr[9] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 };
    int x = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<fo(arr,n,x)<<" ";
    
    // this is for last occurence
    int start = 0;
    int end= n-1;
    int ans = -1;
    while(start<=end)
    {
        int mid = start + (end-start) /2;
        if(arr[mid]  == x)
        {
            ans = mid;
            start = mid +1;
        }
        else if (arr[mid]>x)
        {
            end= mid-1;
        }
        else
        {
            start = mid +1;
        }
    }
    cout<<ans;






   
  


}