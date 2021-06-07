// hashing
// insert , search and delete in O(1) time 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>s;
    s.insert(5);
    s.insert(10);
    if(s.find(5) == s.end())        // finds element    if(s.find(5) == s.end())  element not present
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }

    for(auto it =s.begin();it!=s.end();it++)        // printing all the elements
    {
        cout<<*it<<" ";
    }
   // s.clear();      // clears the whole set 
   // cout<<s.size()<<" ";
   s.insert(10);

   cout<<s.count(10)<<" ";

   if(s.count(10) == 0)
   {
       cout<<"Not present"<<endl;
   }
   s.erase(10);         // removes the element

   s.erase(s.begin() , s.end());         //removes the element in the range
}