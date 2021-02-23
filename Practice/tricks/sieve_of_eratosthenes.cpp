#include<bits/stdc++.h>
using namespace std;

void Sieve(int n)
{
    // create a boolean array " prime [0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime , else true,
    bool prime[n+1];
    memset(prime , true ,sizeof(prime));

    for(int p=2;p*p<=n/2;p++)     // for(int p=2;p<=n/2;p++)   this can also be used
    {
        // if prime[p] is not changed , then it is a prime
        if(prime[p] == true)
        {
            // update all multiples of p greater than or 
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for(int i= p*2; i<=n ;i+=p)
                    prime[i] =false;
        }
    }
    for(int p=2;p<=n;p++)
        if (prime[p])
            cout<<p<<" ";
}

int main(int argc, char const *argv[])
{
    int n=100;
    Sieve(n);
    return 0;
}
