#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 +10;

int hsh[N];

int length(char str[] , int n)
{
    for(int i = 0;i<n;i++)
    {
        int k = int(str[i]);
        hsh[k]++;
    }
    int count = 0;
    for(auto v: hsh)
    {
        if(v == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
   string s;
getline(cin,s);

    int len = s.size();
    char *c = &s[0];

   cout<<length(c, len);

}