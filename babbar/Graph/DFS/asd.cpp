#include<bits/stdc++.h>
using namespace std;

void solve()
{   
    int n;
    cin>>n;
    string sent , copy;
    cin>>sent;
   
    copy = sent;
    int string_count = 0;
    sort(copy.begin() , copy.end());
    for(int i = 0;i<n;i++)
    {
        if(sent[i] != copy[i])
        {
            string_count++;
        }
    }
    cout<<string_count<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
}