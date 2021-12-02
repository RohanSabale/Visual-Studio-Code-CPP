#include<bits/stdc++.h>
using namespace std;

int  check(int num)
{
    int flag  = 1;
    for(int i = 2;i<= num/2 ; i++)
    {
        if(num%i ==0)
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{
    int num = 19;
    cout<<check(num);
}