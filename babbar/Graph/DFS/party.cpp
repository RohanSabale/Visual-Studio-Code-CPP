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

template<typename T> void scan(T &x)
{
    x = 0;
    bool neg = 0;
    register T c = getchar();
  
    if (c == '-')
        neg = 1, c = getchar();
  
    while ((c < 48) || (c > 57))
        c = getchar();
  
    for ( ; c < 48||c > 57 ; c = getchar());
  
    for ( ; c > 47 && c < 58; c = getchar() )
        x= (x << 3) + ( x << 1 ) + ( c & 15 );
  
    if (neg) x *= -1;
}
  
template<typename T> void print(T n)
{
    bool neg = 0;
  
    if (n < 0)
        n *= -1, neg = 1;
  
    char snum[65];
    int i = 0;
    do
    {
        snum[i++] = n % 10 + '0';
        n /= 10;
    }
  
    while (n);
    --i;
  
    if (neg)
        putchar('-');
  
    while (i >= 0)
        putchar(snum[i--]);
  
    putchar('\n');
}


int main()
{
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
     clock_t z = clock();

    // int value;
    // scan(value);
    // print(value);

    int t;
    scan(t);
    int arr[t];
    for(int i = 0;i<t;i++)
    {
        scan(arr[i]);
    }    
    
   



   
    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    
}