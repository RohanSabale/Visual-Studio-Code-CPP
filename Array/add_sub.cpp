/* here you are given an array and the number k  ,you have to divide the array in k small parts and add the numbers of small string and
add the numbers.
*/

#include<bits/stdc++.h>
using namespace std;

void segment_add(int arr[] , int k, int n)
{
    int i;
    int count =0;
    for(i=0;i<n;i=i+k)
    {
        int j=0;
        int sum=0;
        int p=i+k;
        for(j=i;j<p;j++)
        {
            sum+=arr[j];
            if (j==n-1)
                break;
        }
        //sum = arr[i] + arr[i+1] + arr[i+2];
        cout<<sum<<endl;
    }   
}

int main()
{
    int arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3 };
    int  k =10;
    int n = sizeof(arr) /sizeof(arr[0]);
    segment_add(arr,k,n);
    return 0;
    
}