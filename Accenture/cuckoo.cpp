#include<bits/stdc++.h>
using namespace std;

int cuckoo(int n)
{
    if(n==1) return 0;
    if(n ==2) return 1;

    else return 1*cuckoo(n-1) + 2*cuckoo(n-2) + 3*1;
}

int main()
{
    int n,result;
    cin>>n;
    result = cuckoo(n);
    cout<<result;
}