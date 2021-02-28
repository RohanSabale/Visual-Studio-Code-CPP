/*
There are K problems in a contest with N participants. All the problems don't necessarily have the same points assigned to them - you are given an array A of integers, where Ai denotes the points assigned to the ith problem. If a participant solves the ith problem, they will get Ai points added to their total score. Note that there are no partial points - they can get only 0 or Ai points on the ith problem. For each participant i, you are also given their final verdict in each problem in the form of a binary string Si - a 1 denotes that they solved that problem, and a 0

denotes that they did not.

Your job is to find the total score of each participant.
Input:

    The first line of input contains a single integer T

, denoting the number of testcases. Then the testcases follow.
First line of each testcase contains 2
space separated integers, N and K
, denoting the number of participants and the number of problems in the contest respectively.
The second line contains K
space separated integers - A1,A2,…,AK, where Ai denotes the points assigned to the ith
problem.
The ith
of the next N lines contains a binary string Si of length K, where Sij represents the verdict of the jth problem for ith participant. Sij=1 if they solved that problem, and Sij=0

    otherwise.

Output:

For each testcase, output N
lines, with the ith line containing a single integer denoting the total score of the ith

participant.
Constraints

    1≤T≤5

1≤Ai≤105
0≤Sij≤1
Sum of N∗K
over all tests is atmost 106

Sample Input:

3
2 2
1 2
01
10
2 2
1 2
11
00
2 1
100
0
1

Sample Output:

2
1
3
0
0
100
*/


#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>scores(k);
        for(int i=0;i<k;i++)  cin>>scores[i];
        for (int i=0;i<n;i++){
            string s;
            cin>>s;
            long long tot =0;
            for(int i=0;i<k;i++)    {
                tot+=(scores[i] * (s[i] -48));
            }
            cout<<tot<<"\n";
        }
    }
}