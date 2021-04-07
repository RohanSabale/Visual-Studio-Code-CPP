/*
The match is set and your team is ready to win!
The team has N players, each with the ability Ai.

But you are not happy with the given playing order. You are wondering how to create a new order so that the player with lesser ability go earlier, i.e., in non-decreasing order.

In one move, you can break a suffix of any length of the array and attach it to the front. You can do the move as many times as you like.
For example, the Array A=[1,2,3,4,5,6] can become A=[5,6,1,2,3,4] in one move by breaking and reattaching the suffix of length 2.

For each testcase, if the array can be sorted non-decreasingly, print YES and the minimum number of moves to do so. Otherwise, print NO.
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
Each testcase contains two lines. The first line has a single integer N
, denoting the number of players in the team.
The second list has N
space-separated integers of the array A, where Ai represents the ability of the ith

    player 

Output
Print a single line containing the string "YES" if the string can be sorted or "NO" if it does not (without quotes). If answer is yes, print a second line containing a single integer, the minimum number of moves.
You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
Constraints

    1≤T,N≤3⋅105

0≤Ai≤109
The sum of all N
over all testcases T, does not exceed 3⋅105

    . 

Example Input
2
2
1 2
3
2 1 3
Example Output
YES
0
NO
Explanation
Example Case 1: The array is already sorted non-decreasingly. Hence, 0 moves required.
Example Case 2: We cannot satisfy the condition for the given array. Hence, answer is NO. 
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        int found = -1,p=1;
        for(int i=1;i<n;i++)
        {
            if(a[i] <a[i-1])
            {
                found = i;
                if(a[n-1] > a[0])  p =-1;
                    break;
            }
        }
        if(found!=-1)
        {
            for(int i = found+1;i<n;i++)
            {
                if(a[i]<a[i-1])
                {
                    p=-1;
                }
            }
        }
        else{
            cout<<"YES"<<endl<<0<<endl;
            continue;
        }
        if(p==-1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES\n"<<1<<endl;
        }
    }
    return 0;
}