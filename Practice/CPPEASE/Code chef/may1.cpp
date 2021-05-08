#include<bits/stdc++.h>
using namespace std;


vector<bool>Vec;

void initialize()   
{            
    for(int i =0;i<Vec.size();i++)
    {
        Vec[i] = true;
    }
}


int main()
{
    int n = 5;
    Vec.resize(n+1);
    initialize();
    int k = 2;
   

   for(int  i = Vec.size(); i>=k;i = i - (2*k))
   {
       Vec[i] = false;
   }
    cout<<Vec[4];

}