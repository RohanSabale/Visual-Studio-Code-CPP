#include<bits/stdc++.h>
using namespace std;

void mark_current_island(int island[row][column] , int x , int y , int r , int c)
{
    if(x<0 || x>=r || y<0 || y>=c || island[x][y]!=1)   //boundary case for matrix
    {
        return;
    }
    //mark current cell as visited
    island[x][y] = 2;

    // make recursive call in all 4 adjacent directions
    mark_current_island(island ,x+1 ,y ,r,c);   //DOWN
    mark_current_island(island ,x ,y+1 ,r,c);   //RIGHT
    mark_current_island(island ,x-1 ,y ,r,c);   //TOP
    mark_current_island(island ,x ,y -1,r,c);   //LEFT
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

    if(rows == 0)
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