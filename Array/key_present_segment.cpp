/*
Check if a key is present in every segment of size k in an array
Input :
arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3}
x = 3
k = 3
Output : Yes
There are 4 non-overlapping segments of size k in the array, {3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}. 3 is present all segments.

Input :
arr[] = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25}
x = 23
k = 5
Output :Yes
There are three segments and last segment is not full {21, 23, 56, 65, 34}, {54, 76, 32, 23, 45} and {21, 23, 25}.
23 is present all window.

Input :arr[] = { 5, 8, 7, 12, 14, 3, 9}
x = 8
k = 2
Output : No
*/

#include<bits/stdc++.h>
using namespace std;

bool key_segment(int arr[] , int x, int k, int n)
{
    int i;
    for(  i=0;i<n; i=i+k)
    {
        int j;
        for(j=0;j<k;j++)
        {
            if(arr[i+j] == x)
            break;
        }
        if (j==k)
            return false;
    }

    if ( i==n)
        return true;
    
    int j;
    for(j=i-k;j<n;j++)
        if(arr[j] ==x)
            break;
        if (j==n)
            return false;
        
        return true;
}

int main()
{
    int arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3 };
    int x=3, k =3;
    int n = sizeof(arr) /sizeof(arr[0]);
    if(key_segment(arr , x, n,k))
        cout<<"yes"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
    
}