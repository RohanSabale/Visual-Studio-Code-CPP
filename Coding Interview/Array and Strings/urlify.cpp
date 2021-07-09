#include<bits/stdc++.h>
using namespace std;

void urlify(string s)
{
    for(int i = 0;i<s.size();i++)
    {
        int k = int(s[i]);
        if(k ==32)
        {
            s[i] = "%20";
        }
    }
    cout<<s;
}
int main()
{
    string s = "Mr John Smith";
    urlify(s);
}