#include<bits/stdc++.h>
using namespace std;

int fibo(int num)
{
   if(num <=1)
   {
       return num;
   } 
   return fibo(num-1) + fibo(num-2);
}
int main()
{
    int num;
    num  = 9;
    cout<<fibo(num);
}