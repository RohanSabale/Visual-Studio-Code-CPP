#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>V;
    for(int i = 1;i<n;i++)
    {
        if(n%i==0)
        {
            V.push_back(i);
        }
    }
    int sum = 0;
    for(auto v : V)
    {
        sum+=v;
    }
    cout<<sum;
   
}