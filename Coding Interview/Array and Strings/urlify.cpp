/*
URLify: Write a method to replace all spaces in a string with '%20'.
 You may assume that the string has sufficient space at the end 
 to hold the additional characters, 
and that you are given the "true" length of the string
*/

#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000;

void urlify(string s)
{
    int n = s.size();
    int spacecount = 0;
    for(int i = 0;i<n;i++)
    {
        if(s[i] ==' ')
        {
            spacecount++;
        }
    }

    int index  = n  + spacecount*2;
    if(n<s.size())
    {
        s[n] = '\0';
    }
    for(int i = n-1;i>=0;i--)
    {
        if(s[i] ==' ')
        {
            s[index-1] = '0';
            s[index-2] = '2';
            s[index-3] = '%';
            index = index -3;
        }
        else
        {
            s[index-1] = s[i];
            index--;
        }
    }
    cout<<s;
}

int main()
{
    string s;
    s= "Rohan Sabale";
    urlify(s);
}