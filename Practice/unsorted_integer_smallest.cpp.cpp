//Given an unsorted integer array nums, find the smallest missing positive integer.
//nums = [1,2,0]
//op = 3

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int A[10] = { -9 ,-8, -7, -4, -3, -1, 0 ,1 ,4, 8 };
     int n = 10;
      
       // here we try  to place the numbers at their respective index
        // and the number which does not matches to indec is the requried answer
     for(int i =0;i<n;i++)
     {
         while(A[i] >=1 && A[i] <=n  && A[i] != A[A[i] -1])     // here first one takes only positive number , second one skips the number greater than n , and last one checks the 
                                                                                                // previous number is not same  as it is o based index
         {
             swap (A[i] ,A[A[i] - 1]);
         }
     }

         for(int i = 0;i<n;i++)
         {
             if(A[i] != i+1)
             {
                 cout<<i+1<<"\n";
                 break;
             }
         }        
}