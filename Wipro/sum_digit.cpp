#include<bits/stdc++.h>
using namespace std;

void sum(int num)
{
    int ad = 0 ;
    while(num!=0)
    {
        ad = ad + num%10;
        num = num/10;
    }
    cout<<ad;
}

void getsum(int num)
{
    int sum  = 0;
    string str = to_string(num);

    for(int i = 0;i<str.size();i++)
    {
        sum +=str[i] -48;
    }
    cout<<sum;
}

int main()
{
    int num;
    num = 687;
    sum(num);
}