#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int arr[n] ={45,78,96,32,12,0};
    sort(arr,arr+n);
    cout<<"minimum  "<<arr[0]<<"\n";
    cout<<"maximum  "<<arr[n-1] <<"\n";
}