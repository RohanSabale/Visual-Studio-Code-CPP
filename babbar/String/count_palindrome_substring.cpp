// this program counts the total number of palindrome substring in a string including the string having count 1;


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str=   "abaab";
     int n = str.size();
     
     bool dp[n][n];
     int count = 0 ;

     for(int g=0 ;g<n ;g++)
     {
         
         for(int i = 0 , j = g ; j<n; i++,j++)      // all diagonals start from first row and end at last column
         {
             if(g ==0)
             {
                 dp[i][j] = true;
                 //count++;
             }
             else if(g==1)
             {
                 if(str[i] == str[j])
                 {
                     dp[i][j] = true;
                     //count++;
                 }
                 else
                 {
                     dp[i][j]= false;
                 }
             }
             else
             {
                 if(str[i] == str[j] && dp[i+1][j-1] ==true)
                 {
                     dp[i][j] = true;
                     //count++;
                 }
                 else
                 {
                     dp[i][j] = false;
                 }
             }
             
            if(dp[i][j])
            {
             count++;
            }
         }
  
     }
     cout<<count;

}