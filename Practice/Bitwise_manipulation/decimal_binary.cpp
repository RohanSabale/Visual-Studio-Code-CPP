#include<bits/stdc++.h>
using namespace std;


void decimal_binary(int n)
{
    // size of an integer is assumed to be 32 bits
    for(int i=31;i>=0;i--)
    {
        int k =n>>i;
        if (k & 1)
        {
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
}
int main()
{
    int n;
    n=16;
    decimal_binary(n);
} 