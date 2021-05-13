#include<bits/stdc++.h>
using namespace std;

long long  fastpower(long long a , long long b , int n)
{
    long long res = 1;
    while(b>0)
    {
        if((b&1) !=0)    // checking for even and odd
        {
            res =( res *a %n)%n;
        }
        a = (a%n * a%n)%n;
        b= b>>1;           // right shift is divide by 2 and left shift is multiply by 2
    }
    return res;
}

int main()
{
    cout<<fastpower(3978432 , 5 , 1000000000);
}


// properties of modulo

// distributive property
// 1.(a+b)%n =  (a%n + b%n) %n
// 2.(a*b)%n =  (a%n * b%n) %n
// 3.(a - b)%n =  (a%n - b%n) %n

