// steps for recursion
//1. find the base class
//2. find the relation between the problem and subproblem
//3. generalize the relation

#include<bits/stdc++.h>
using namespace std;

int sum(int n)          // sum of n numbers
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}

int power(int a , int b)            // power as a^b         complexity O(n)
{
    if(b ==0)
    {
        return 1;
    }
    return a*power(a,b-1);
}

int ways_matrix(int n , int m)      // ways to go from left top corner to right bottom corner in nxm matrix
{
    if(n== 1 || m == 1)
    {
        return 1;
    }
   return ways_matrix(n-1,m) + ways_matrix(n,m-1);
}

int factorial(int n)        // factorial of number
{
    if(n<=1)
    {
        return 1;
    }
    else
    return factorial(n-1) * n;
}

int fibonacci(int num)
{
    if(num == 1 || num ==0)
    {
        return num;
    }
    else
    return fibonacci(num-1) + fibonacci(num-2);
}


int main()
{
    //cout<<sum(1);
    //cout<<power(3,5);
    //cout<<ways_matrix(4,3);
    //cout<<factorial(5);
    
    // int num = 10;
    // int i =0;
    // while( i<num)
    // {
    //     cout<<" "<<fibonacci(i);
    //     i++;
    // }

     
}