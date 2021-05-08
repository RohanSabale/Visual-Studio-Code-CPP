#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;


vector<bool>visited;

void initialize()   
{            
    for(int i =0;i<visited.size();i++)
    {
        visited[i] = true;
    }
}

auto solve()
{
    int N,x,k;
    cin>>N>>x>>k;

    visited.resize(N+1);
    initialize();

    for(int i = k;i<=visited.size();i=i*k)
    {
        visited[i] = false;
    }

    if(visited[x] == false)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        
        cout<<"NO";
    }
}





int main()
{
    /*
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
    */

    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve();
    }  
}