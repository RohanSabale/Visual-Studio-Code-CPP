/*
Least common multiple
             lcm(a,b)=               a⋅b
                                        ---------
                                        gcd(a,b)
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
    if(b==0)
        return 1;
    else
    {
        return gcd(b,a%b);
    }
    
}

int lcm(int a , int b)
{
    return a/gcd(a,b) *b;
}

int main()
{
    int a, b;
    a=15;
    b=20;
    cout<<lcm(a,b);
}