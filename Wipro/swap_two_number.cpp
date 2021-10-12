#include<bits/stdc++.h>
using namespace std;

void swap(int a,  int b)
{
    a = a^b;                            //a = a+b;              //a = a*b;
    b = a^b;                            //b = a-b;              //a = a/b;
    a = a^b;                            //a = a-b;              // a = a/b;
    cout<<a<<" "<<b;
}

int main()
{
    int a,b;
    a = 5,b = 10;
    swap(a,b);
    return 0;
}