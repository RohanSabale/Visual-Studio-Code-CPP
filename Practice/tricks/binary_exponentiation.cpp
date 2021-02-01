#include<bits/stdc++.h>
using namespace std;


long long binpow(long long a , long long b)
{
    if (b==0)
    {
        cout<<"1";
        return 1;
    }
    long long res = 1;
    while(b>0)
    {
        if(b & 1)             // (b&1) produces value 
        {
            res = res * a;
        }
        a = a*a;
        b>>=1;
    }
    cout<<res<<endl;
    return res;
}

int main()
{
    long long a,b;
    a=3;
    b=3;
    binpow(a,b);

}