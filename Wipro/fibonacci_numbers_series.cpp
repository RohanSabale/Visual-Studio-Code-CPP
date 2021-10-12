#include<bits/stdc++.h>
using namespace std;

void fibonaccinumbers(int num)
{
    int f1 = 0,f2 = 1,i;

    if(num <1)
    {
        return;
    }
    cout<<f1<<" ";
    for(int i = 1;i<num;i++)
    {
        cout<<f2<<" ";
        int next  = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

int main()
{
   fibonaccinumbers(7);
   return 0;
}