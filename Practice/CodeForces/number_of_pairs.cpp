// C. Number of Pairs

// https://codeforces.com/problemset/problem/1538/C
// You are given an array a
// of n integers. Find the number of pairs (i,j) (1≤i<j≤n) where the sum of ai+aj is
//  greater than or equal to l and less than or equal to r (that is, l≤ai+aj≤r).

// For example, if n=3
// , a=[5,1,2], l=4 and r=7

// , then two pairs are suitable:

//     i=1

// and j=2 (4≤5+1≤7
// );
// i=1
// and j=3 (4≤5+2≤7). 

// Input

// The first line contains an integer t
// (1≤t≤104). Then t

// test cases follow.

// The first line of each test case contains three integers n,l,r
// (1≤n≤2⋅105, 1≤l≤r≤109

// ) — the length of the array and the limits on the sum in the pair.

// The second line contains n
// integers a1,a2,…,an (1≤ai≤109

// ).

// It is guaranteed that the sum of n
// overall test cases does not exceed 2⋅105

// .
// Output

// For each test case, output a single integer — the number of index pairs (i,j)
// (i<j), such that l≤ai+aj≤r

// .
// Example
// Input
// Copy

// 4
// 3 4 7
// 5 1 2
// 5 5 8
// 5 1 2 4 3
// 4 100 1000
// 1 1 1 1
// 5 9 13
// 2 5 5 1 1

// Output
// Copy

// 2
// 7
// 0
// 1



#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  ans,e,n,s,i,l,r;
    cin>>e;
    while(e--)
    {
        cin>>n>>l>>r;
        vector<long long > a(n);
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ans = 0;
        for( i = 0;i<n-1;i++)
        {
            auto itr1 = lower_bound(a.begin()+i+1,a.end() , l-a[i]);
            auto itr2 = upper_bound(a.begin()+i+1 , a.end() , r-a[i]);
            ans+=(itr2 - itr1);

        }
        cout<<ans<<endl;
    }
}