/*
A. Array and Peaks
A sequence of n integers is called a permutation if it contains all integers from 1 to n

exactly once.

Given two integers n
and k, construct a permutation a of numbers from 1 to n which has exactly k peaks. An index i of an array a of size n is said to be a peak if 1<i<n and ai>ai−1 and ai>ai+1. If such permutation is not possible, then print −1

.
Input

The first line contains an integer t
(1≤t≤100

) — the number of test cases.

Then t
lines follow, each containing two space-separated integers n (1≤n≤100) and k (0≤k≤n

) — the length of an array and the required number of peaks.
Output

Output t
lines. For each test case, if there is no permutation with given length and number of peaks, then print −1. Otherwise print a line containing n space-separated integers which forms a permutation of numbers from 1 to n and contains exactly k

peaks.

If there are multiple answers, print any.
Example
Input
Copy

5
1 0
5 2
6 6
2 1
6 1

Output
Copy

1 
2 4 1 5 3 
-1
-1
1 3 6 5 4 2

Note

In the second test case of the example, we have array a=[2,4,1,5,3]
. Here, indices i=2 and i=4 are the peaks of the array. This is because (a2>a1, a2>a3) and (a4>a3, a4>a5). 
*/


#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int maxpeak  = (n-1)/2;
        if(k>maxpeak)
        {
            cout<<"-1"<<"\n";
            continue;
        }



        int s =1,e =n;

        int lim = k*2+1;
        for(int i=1;i<=n && lim;i++,lim --)
        {
            if(i%2==0)
            {
                cout<<e<<" ";
                e--;
            }
            else
            {
                cout<<s<<" ";
                s++;
            }
        }
        for(int i =s;i<=e;i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
 return 0;

}