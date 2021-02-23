// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num;
    int count0 = 0;
    int count1 =0;
    int count2=0;

    for(int i=0;i<n;i++)
    {
        cin>>num;
        if (num ==0 )
                count0++;
        if (num ==1)
                count1++;
        if (num ==2)
                count2++;
    }
    while(count0 --)
    {
        cout<<"0"<<" ";
    }
    while(count1--)
    {
        cout<<"1"<<" ";
    }
    while(count2 --)
    {
        cout<<"2"<<" ";
    }
    cout<<"\n";
}