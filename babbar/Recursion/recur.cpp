#include<bits/stdc++.h>
using namespace std;

void printdigit(int n)
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0)
    {
        return ;
    }
    printdigit(n/10);
    cout<<arr[n%10]<<" ";
}

int main()
{
    int n;
    n =1000 ;
    printdigit(n);
    
}