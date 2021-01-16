#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0, r=4;
        while(r<=n)
        {
            int x=0;
            x=stoi(s, 0 , 2);
            cout<<char(x+97);
            l+=4;
            r+=4;
        }
        cout<<endl;
    }

}