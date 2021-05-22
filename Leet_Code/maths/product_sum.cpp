// 1281. Subtract the Product and Sum of Digits of an Integer
// Easy
// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

 

// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15


#include<bits/stdc++.h>
using namespace std;

int solve(int num)
{
   int product  =  1;
   int sum = 0;

   for(int i = num ; i; i/=10)
   {
       sum +=i %10;
       product *= i %10;
   }
   return product - sum;
}

int main()
{
    int num = 234;
     int k  = solve(num);
    cout<<k;
}