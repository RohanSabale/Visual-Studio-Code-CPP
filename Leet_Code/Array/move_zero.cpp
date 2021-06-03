#include<bits/stdc++.h>
using namespace std;

void moveZero(vector<int>&V)
{
    int count =0;
    int n  = V.size();
    for(int i =0;i<n;i++)
    {
        if(V[i] !=0)
        {
           V[count++] = V[i];
        }
    }
    while(count <n)
    {
        V[count++] =0;
    }
   
}

int main()
{
    vector<int>V{0,1,0,3,1,2};
    moveZero(V);
    for(auto v: V)
    {
        cout<<v<<endl;
    }
}