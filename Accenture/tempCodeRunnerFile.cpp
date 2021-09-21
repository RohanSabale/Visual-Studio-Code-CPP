#include<bits/stdc++.h>
using namespace std;

void longest(char str[] , int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<str[i];
    }
}

int main()
{
    string s;
    getline(cin,s);

    int len = s.size();
    char *c = &s[0];

    longest(c,len);
}