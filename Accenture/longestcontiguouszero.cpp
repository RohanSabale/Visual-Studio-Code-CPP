#include<bits/stdc++.h>
using namespace std;

void longest(char str[] , int n)
{
    int csum = 0;
    int osum = 0;
    for(int i = 0;i<n;i++)
    {
       if(str[i] == '0')
       {
           csum+=1;
           if(csum>osum)
           {
               osum = csum;
           }
       }
       else
       {
           csum = 0;
       }

    }
    cout<<osum;
}

int main()
{
    string s;
    getline(cin,s);

    int len = s.size();
    char *c = &s[0];

    longest(c,len);
}