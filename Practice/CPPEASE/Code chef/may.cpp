#include<bits/stdc++.h>
using namespace std;

long long  p =1000000007; 
auto solve(int n , int q, int p)
{
    int out = 1;

    n = n%p;

    if(n == 0)
    {
        return 0;
    }
    while(q>0)
    {
        if(q&1)
        {
            out = (out *n) %p;
        }
        q = q>>1;
        n = (n*n) % p;
    }
    return out;
}

int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        cout<<solve(2,n-1,p)<<"\n";

    }
    return 0;
}