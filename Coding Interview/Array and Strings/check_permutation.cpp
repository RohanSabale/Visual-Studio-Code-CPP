/*
Check Permutation: Given two strings, 
write a method to decide if one is a permutation of the other.
*/
#include<bits/stdc++.h>
using namespace std;

bool check_permutation(string a , string b)
{
    if(a.size() != b.size())
    {
        return false;
    } 
    vector<int>Vec(128);
    for(int i = 0;i<a.size();i++)
    {
        int k = int(a[i]);
        Vec[k]++;
    }
    for(int i = 0;i<b.size();i++)
    {
        int k = int(b[i]);
        Vec[k]--;
        if(Vec[k] < 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a = "apple";
    string b = "pplaa";
    if(check_permutation(a,b))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}