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
    int sum = 0;
    int prod= sum;
    for(sum = 0 ; num>0; sum+=num%10,num/=10) 
        {
            ;
        }

    int product = 1;
    while(num != 0)
    {
        product = product  * (prod%10);
        prod = prod / 10;
    }
    //int result = product - sum;
    return product;
}

int main()
{
    int num = 234;
     int k  = solve(num);
    cout<<k;
}