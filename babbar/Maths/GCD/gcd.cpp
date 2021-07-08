/*

this method is called Euclids algorithm
gcd(a,b)=       {a,                                      if b=0}
                       {  gcd(b,amodb),                 otherwise}

gcd(a,b) = gcd(b,a%b)

complexity- O(min(a,b))
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b , a% b);
    }
    
}

int main()
{
    int a;
    int b;
    a=18;
    b=24;
    cout<<gcd(a,b);
}
