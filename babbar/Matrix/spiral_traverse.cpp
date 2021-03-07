#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

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
    /* 
    printing the matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        if(i!=r-1)
        {
            cout<<"\n";
        }
    }
    */

   int minr = 0;
   int minc = 0;

   int maxr = r-1;
   int maxc = c-1;
   
   int total = r*c;
   int count =0;

   while(count<total)
   {
       // left wall  -> mincolumn
       for(int i=minr ,j = minc;i<=maxr  && count < total;i++)
       {
           cout<<matrix[i][j];
           count++;
       }
       minc++;
       // bottom wall  -> maxrow
       for(int i = maxr,j = minc;j<=maxc && count<total;j++)
       {
           cout<<matrix[i][j];
           count++;
       }
       maxr--;
       // right wall  -> maxcolumn
       for(int i=maxr,j=maxc;i>=minr && count<total;i--)
       {
           cout<<matrix[i][j];
           count++;
       }
       maxc--;
       // top wall  ->minrow
       for(int i =minr,j= maxc;j>=minc && count < total;j--)
       {
           cout<<matrix[i][j];
           count++;
       }
       minr++;

   }
}