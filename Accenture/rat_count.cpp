#include<iostream>
using namespace std;

int main()
{
    int r,unit ,n;
    cin>>r;
    cin>>unit;
    cin>>n;
    int arr[n];

    int total = unit *r;
    int count = 0;
    int sum = 0;

    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag;
    for(int i = 0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=total)
        {
            count++;
            flag =1;
            break;
        }
        else
        {
            flag = 0;
            count++;
        }
        
    }
    if(flag==0)
    {
        cout<<0;
    }
    else
    {
        cout<<count;
    }
    
}