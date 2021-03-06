#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

int main()
{
     boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif

   string s;
   cin>>s;
  
   vector<int>v;
   for(int i=0;i<s.size();i++)
   {
        int count =0;
      if(s[i] ==1)
      {
          count+=1;
      }
      if(s[i] =='0')
      {
          v.push_back(count);
          count=0;
      }
   }
   for(auto value:v)
   {
       cout<<value;
   }
}

   
       