#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] =='1' &&  s[i+1]!='1')
            count+=1;
    }
    cout<<count;
}