/* 
Given array a of N integers . Given Q queries and in each query given a number  X , print 
count of that number in array

Constraints
1<=N<=10^5
1<=a[i] <=10^7
1<= Q <=10^5
*/



/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)   
    {
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == x)
            {
                ct++;              // normal solution for counting the count of number of elemet in array
            }
        }
        cout<<ct<<"\n";
    }
}

*/

// using precomputation [hashing]

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 +10;

int hsh[N];

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];            // using hashing 
        hsh[a[i]] ++;
    }
    int q;
    cin>>q;
    while(q--)   
    {
        int x;
        cin>>x;
        int ct=0;
       
       cout<<hsh[x] <<"\n";
    }
}
