#include<bits/stdc++.h>
using namespace std;

int palindrome(int num)
{
    string str = to_string(num);
    int len  = str.size();
    for(int i = 0;i<str.size()/2;i++)
    {
        if(str[i] != str[len-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    num = 1421;
    cout<<palindrome(num);
    return 0;
}