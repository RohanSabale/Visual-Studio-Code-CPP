#include<bits/stdc++.h>
using namespace std;

int sum_of_even_digits(int n)
{
    int r , sum = 0;
    while(n>0)
    {
        r = n%10;
        n = n/10;

        if(r%2 == 0)
        {
            sum = sum+ r;
        }
    }
    return sum;
}

int sum_of_odd_digits(int n)
{
     int r , sum = 0;
    while(n>0)
    {
        r = n%10;
        n = n/10;

        if(r%2 == 1)
        {
            sum = sum+ r;
        }
    }
    return sum;
}


int main()
{
    int a =0 , b=0,i=0;
    char num[100];
    cin>>num;

    int len = strlen(num);
    cout<<len;

    while(n>0)
    {
        if(i ==0)       // add even digits when no of digits is even and vice versa
        {
            a +=num[n-1] -48;
            n--;
            i = 1;
        }
        else        // add odd digits when no of digits is even and vice versa
        {
            b+=num[n-1]-48;
            n--;
            i=0;
        }
    }

    cout<<abs(a-b); // print the differnce of odd and even
    return 0;

}