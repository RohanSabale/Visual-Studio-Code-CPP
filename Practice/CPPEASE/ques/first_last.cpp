/*
here ou have to take the array and add the first and last number and print it ,do this till we get the middle number
and print the middle number as it is(not having pair) basically odd size of array

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    if(t%2==0)
    {
    for (int i = 0; i < t/2; i++)
    {
        /* code */
        int k = arr[i] + arr[t-1-i];
        cout<<k<<" ";
    }
    }
    else
    {
        for (int i = 0; i < t/2; i++)
    {
        /* code */
        int k = arr[i] + arr[t-1-i];
        cout<<k<<" ";
    }
    cout<<arr[t/2];
    }
    return 0;
}