#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // <key-> int , value->float , mp-> name
    map<int ,float> mp ;
    mp[2] = 3.0;
    mp[1] = 4.2;
    mp[6] = 7.8;


    unordered_map<int, int> ump;
    ump[2] = 4;
    ump[9] = 56;
    ump[6] = 78;

    if(ump.find(2) == ump.end()){
        cout<<"Not found";
    }else
    {
        cout<<"found";
    }
    
     mp.insert({3,3.4});
     mp.erase(3);
     // how to loop
     for(auto it = mp.begin(); it!=mp.end(); it ++)
     {
         cout<<it->first<<" "<<it->second<<endl;
     }
    

    return 0;
}
