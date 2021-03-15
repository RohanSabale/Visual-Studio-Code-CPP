// minimize the maximum difference between heights
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k = 2;
    //cin>>n;
    vector<int>vec {1,5,8,10};
   vector<pair<int,int>>all_pair;

   for(int i=0;i<vec.size();i++)
   {
       all_pair.push_back(make_pair(vec[i] +k , i));
        if(vec[i] >=k)
       {
       all_pair.push_back(make_pair(vec[i] - k , i));
       }
   }
   
  // cout<<all_pair.size();

   for(int i=0;i<vec.size();i++)
   {
       cout<<all_pair[i].first<<" "
                <<all_pair[i].second<<endl;
   }
   

}