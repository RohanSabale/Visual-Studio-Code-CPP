/*
Is Unique: Implement an 
algorithm to determine if a string has all unique characters. 
*/

#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 128;

bool isunique(string s)
{
    if(s.size() > 128)
        return false;
    
    bool arr[MAX_CHAR] = {0};
    for(int i = 0;i<s.size();i++)
    {
       if (arr[int(s[i])] == true)
            return false;
        
        arr[int(s[i])] = true;
    }
    return true;
}

int main()
{
    string s;
    s = "rohan";
    if(isunique(s))
    {
        cout<<"unique"<<endl;
    }
    else
    {
        cout<<"not unique"<<endl;
    }
    return 0;
}