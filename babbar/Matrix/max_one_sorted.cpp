/*
Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

*/
#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;



int main()
{
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
   

   int r,c;
    cin>>r>>c;
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int j =c-1;
    while(j>=0 && matrix[0][j] ==1)
    {
        j--;
    }
    int row = 0;
    for(int i=0;i<r;i++)
    {
        while(j>=0 && matrix[i][j] ==1)
        {
            j--;
            row=i;
        }
    }
    cout<<row;
    //return row;
    
    
    
}