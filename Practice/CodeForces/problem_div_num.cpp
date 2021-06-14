// Another Problem About Dividing Numbers

// You are given two integers a
// and b

//  In one turn, you can do one of the following operations:

//     Take an integer c

// (c>1 and a should be divisible by c) and replace a with ac
// ;
// Take an integer c
// (c>1 and b should be divisible by c) and replace b with bc
//     . 
// Your goal is to make a
// equal to b using exactly k turns.

// For example, the numbers a=36
// and b=48 can be made equal in 4 moves:

// c=6

// , divide b by c ⇒ a=36, b=8
// ;
// c=2
// , divide a by c ⇒ a=18, b=8
// ;
// c=9
// , divide a by c ⇒ a=2, b=8
// ;
// c=4
// , divide b by c ⇒ a=2, b=2

//     . 

// For the given numbers a
// and b, determine whether it is possible to make them equal using exactly k

// turns.
// Input

// The first line contains one integer t
// (1≤t≤104). Then t

// test cases follow.

// Each test case is contains three integers a
// , b and k (1≤a,b,k≤109

// ).
// Output

// For each test case output:

//     "Yes", if it is possible to make the numbers a

// and b equal in exactly k

//     turns;
//     "No" otherwise. 

// The strings "Yes" and "No" can be output in any case.
// Example
// Input
// Copy

// 8
// 36 48 2
// 36 48 3
// 36 48 4
// 2 8 1
// 2 8 2
// 1000000000 1000000000 1000000000
// 1 2 1
// 2 2 1

// Output
// Copy

// YES
// YES
// YES
// YES
// YES
// NO
// YES
// NO

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1000009;
    bool prime[n+1];
    memset(prime , true , sizeof(prime));

    for(int p = 2 ;p*p <=n ;p++)
    {
        if(prime[p] == true)
        {
            for(int i = p*p  ; i<=n ;i+=p)
            {
                prime[i] = false;
            }
        }
    }
    vector<int>x;
    for(int i =2 ;i<n;i++)
    {
        if(prime[i] == true)
            x.push_back(i);
    }

int t;
cin>>t;
while(t--)
{
    ll a,b,k;
    cin>>a>>b>>k;
    if(k==1)
    {
        if(a==1 && b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(a==b)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(a%b==0 || b%a == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        continue;
    }
    ll sum = 0;

    while(a%2 ==0)
    {
        a = a/2;
        sum++;
    }
    for(int i = 0; x[i] <=sqrt(a) && i<x.size();i++)
    {
        while(a%x[i] == 0)
        {
            sum++;
            a = a/x[i];
        }
    }
    if(a>2)
    {
        sum++;
    }
    while (b%2 == 0)
    {
        b = b/2;
        sum++;
    }
    for(int i = 0;x[i] <=sqrt(b) && i<x.size() ;i++)
    {
        while(b%x[i] == 0)
        {
            sum++;
            b = b/x[i];
        }
    }
    if(b>2)
    {
        sum++;
    }
    if(k<=sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
return 0;

}