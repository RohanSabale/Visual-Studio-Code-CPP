// print all the duplicates in the input string

#include<bits/stdc++.h>
using namespace std;


void printDups(string str)
{
    map<char,int>count;
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    for(auto it : count)
    {
       
            cout<<it.first<<it.second<<"\t";
        
       
    }
}

int main()
{
    string str=  "teststring";
    printDups(str);
    return 0;
}