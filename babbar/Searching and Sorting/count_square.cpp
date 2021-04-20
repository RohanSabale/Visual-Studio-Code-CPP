// Consider a sample space S consisting of all perfect 
// squares starting from 1, 4, 9 and so on. You are given 
// a number N, you have to output the number of integers
//  less than N in the sample space S.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int a = sqrt(n);
    if(a*a == n) 
    {
        cout<<a-1<<"\n";
    }
    else{
        cout<<a;
    }
}