
// this solution is using normal recursion
/*#include<bits/stdc++.h>
using namespace std;


long long binpow(long long a , long long b)
{
    
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
    
    return res;
}

int main()
{
    long long a,b;
    a=3;
    b=3;
    cout<<binpow(a,b);

}

*/

// another way of solving

#include<bits/stdc++.h>
using namespace std;


long long binpow(long long a , long long b)
{
    if (b==0)
        return 1;

    long long  res = binpow(a,b/2);
    if (b & 1)
        return res * res *a;
    
    else

        return res * res;
    
}

int main()
{
    long long a ;
    long long b;
    a =3;
    b=3;
   cout<< binpow(a, b);
   
}



