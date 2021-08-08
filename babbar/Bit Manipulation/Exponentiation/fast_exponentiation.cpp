#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long ll;

typedef pair<int,int>pii;
typedef  vector<int>vi;
typedef vector<bool>vb;

#define ff first
#define ss second
#define pb push_back
#define all(s) s.begin() ,s.end()


#define fo(i, n) for (int i = 0; i < n; i++)
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)


ll fastModExp(ll a , ll b , ll m)
{
    ll res = 1;
    while(b>0)
    {
        // if b is odd , multiply a with result
        if(b&1)
        {
            res = (res*a) % m;
        }

        // 
        a = (a*a)%m;
        b=b>>1;
    }
    return res;
}

int main()
{
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
     clock_t z = clock();

    cout<<fastModExp(5,3,100)<<endl;

    
  



   
    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    
}