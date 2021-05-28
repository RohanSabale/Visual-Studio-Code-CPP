// have errors need to be resolved

#include<bits/stdc++.h>
using namespace std;

void mark_current_island(int island[][column] , int i , int j , int row , int column)
{
    if(i<0 || i>=row || j<0 || j>=column || island[i][j]!=1)   //boundary case for matrix
    {
        return;
    }
    //mark current cell as visited
    island[i][j] = 2;

    // make recursive call in all 4 adjacent directions
    mark_current_island(island ,i+1 ,j ,row,column);   //DOWN
    mark_current_island(island ,i ,j+1 ,row,column);   //RIGHT
    mark_current_island(island ,i-1 ,j ,row,column);   //TOP
    mark_current_island(island ,i ,j -1,row,column);   //LEFT
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int row,column ;
    cin>>row>>column;
    int island[row][column];
    int no_of_islands = 0;


    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<column;j++)
        {
            cin>>island[i][j];
        }
    }

    if(row == 0)
    {
        return 0;
    }

    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<row;j++)
        {
            if(island[i][j] == 1 )
            {
                mark_current_island(island,i,j,row,column);
                no_of_islands+=1;
            }
        }
    }
cout<<no_of_islands<<endl;
}