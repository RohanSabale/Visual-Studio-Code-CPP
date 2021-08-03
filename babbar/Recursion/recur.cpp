#include<bits/stdc++.h>
using namespace std;

int exponent(int n , int m)
{
    if(m==0)
    {
        return 1;
    }
    int ans = n*exponent(n,m-1);
    return ans;

}

int main()
{
    int n,m;
    n=2;
    m =4;
    cout<<exponent(n,m);
}