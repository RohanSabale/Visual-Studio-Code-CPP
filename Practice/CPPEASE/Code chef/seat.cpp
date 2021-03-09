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
    int t;
    cin>>t;
    while(t--)
    {
   string s;
   cin>>s;
    //vector<int>v;
   int count =0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i] =='1')
       {
           count++;
           for(int j = i+1;j<s.size();j++)
           {
               if(s[j] =='1')
               {
                   i++;
               }
                else
                   {
                       break;
                   }
               }
           }
       }
   
   cout<<count<<endl;
    }
  
}

   
       