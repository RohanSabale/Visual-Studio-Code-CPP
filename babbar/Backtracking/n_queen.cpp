#include<bits/stdc++.h>
#define N 4
using namespace std;

// function to print solution
void printSolution(int board[N][N])
{
    for(int i = 0;i<N;i++)
    {
        for(int j = 0;j<N;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    
}


// a utility function to check if a queen can be placed on board[row][col]
// note that this function is called when "col" queens are already placed in
// columns from 0 to col -1.
// so we need to check only left side for attacking queen
bool isSafe(int board[N][N] , int row , int col)
{
    int j;
    // check this row on left side
    for (int i = 0;i<col;i++)
    {
        if(board[row][i])
            return false;
    }

    // check upper diagonal on left side
    for(int i = row , j = col;i>=0 && j>=0 ;i-- ,j--)
    {
        if(board[i][j])
            return false;
    }

    // check lower diagonal on left side
    for(int i = row , j= col ;j>=0 && i<N ;i++ ,j--)
    {
        if(board[i][j])
            return false;
    }
    return true;
}

// A recursive utility function to solve N Queen problem
bool solveNQUtil(int board[N][N] , int col)
{
    if(col>=N)
    {
        return true;
    }
    // consider this column and try placing this queen in all rows one by one
    for(int i = 0;i<N;i++)
    {
        // check if the queen can be placed on board[i][col]
        if(isSafe(board , i , col))
        {
            // place this queen in board[i][col]
            board[i][col] = 1;

            // recur to place rest of the queens 
            if(solveNQUtil(board , col+1))
                return true;

            // if placing queen in board[i][col] doesn't lead to a solution ,
            // then remove queen from board[i][col]
            board[i][col] = 0;  // backtrack
        }
    }
    return false;
}


bool solveNQ()
{
    int board[N][N] = {{0,0,0,0},
                                 {0,0,0,0},
                                 {0,0,0,0},
                                 {0,0,0,0}};
    
    if(solveNQUtil(board , 0) == false)
    {
        cout<<"Solution doesnt exist";
        return false;
    }
    printSolution(board);
    return true;
}

int main()
{
    solveNQ();
    return 0;
}