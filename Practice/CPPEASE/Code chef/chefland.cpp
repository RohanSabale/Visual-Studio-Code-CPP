/*
Chef is participating in an ICPC regional contest, in which there is a total of N problems (numbered 1 through N) 
with varying difficulties. For each valid i, the i-th easiest problem is problem Ai.

After a team solves a problem, a balloon with a colour representing that problem is tied next to their desk.
 Chef is fond of colours in VIBGYOR, which are representative of the problems with numbers 1 through 7. 
 The remaining problems have their own representative colours too.

Find the minimum number of problems which Chef's team needs to solve in order to get all the balloons
 for problems 1 through 7 (and possibly some other balloons too) tied next to their desk, if you know that
  Chef's team knows the difficulties of all problems and solves the problems in increasing order of difficulty.

Input
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing one integer ― 
the minimum number of problems Chef's team needs to solve.

Constraints
1≤T≤10,500
7≤N≤15
1≤Ai≤N for each valid i
A1,A2,…,AN are pairwise distinct
Example Input
3
7
1 2 3 4 5 7 6
8
8 7 6 5 4 3 2 1
9
7 4 3 5 6 1 8 2 9
Example Output
7
8
8
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool hasall(vector<int> a)
{
    int cnt = 0;
    for(auto it:a)
    {
        if(it>=1 && it<=7)
            cnt++;
    }
    if(cnt == 7)
    {
        return true;
    }
    return false;
}

void solve()
{
   int n;
   cin>>n;

   vector<int>a(n);
   for(int i = 0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i = 0;i<n;i++)
   {
       vector<int>arr;
       for(int j = 0;j<=i;j++)
       {
           arr.push_back(a[j]);
       }
       if(hasall(arr))
       {
           cout<<i+1<<endl;
           return;
       }
   }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
}