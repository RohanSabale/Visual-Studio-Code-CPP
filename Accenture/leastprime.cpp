#include<bits/stdc++.h>
using namespace std;

int smallest(int n)
{
    if(n%2 == 0)
    {
        return 2;
    }
    for(int i = 3 ;i*i <=n;i+=2)
    {
        if(n%i == 0)
        {
            return i;
        }
    }
    return n;
}


int main()
{
    int n = 1771;
    cout<<n-smallest(n);
}