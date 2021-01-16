/* 
here we have to take the number and add all the numbers 
like '12345' will be 1+2+3+4+5=15
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,m;
    cout<<"Enter a number";
    cin>>n;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    cout<<"sum is="<<sum<<endl;
    return 0;
}