#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    string s;
    cin>>k;
    bool ans = true;
    for(int i =1;i<=k;i++)
    {
        cin>>s;
        if(ans)
        {
            bool first = false ,second = false;
            for(auto ch :s)
            {
                if(ch >='a' && ch<='m')
                    first = true;
                else if(ch>='N' && ch<='Z')
                    second = true;
                else
                    ans = false;
            }
            if(first && second)
                ans= false;
        }
    }
    if(ans)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}