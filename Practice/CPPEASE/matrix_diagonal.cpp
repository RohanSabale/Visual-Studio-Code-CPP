#include<bits/stdc++.h>
//#define ios_base :: sync_with_stdio(false),cin.tie(NULL);
#define in(in,arr) for (int i=0;i<n;i++) cin>>arr[i]
#define out(n,arr) for (int i=0;i<n ;i++) cout<<arr[i] <<" "
#define ll long long int;
using namespace std;

int main()
{
    #define ios_base :: sync_with_stdio(false),cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        //int i,j=0;
        cin>>n>>m;
        int arr[n][m];
        int count =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;i<m;i++)
            {
                cin>>arr[i][j];
            }
        }

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(arr[i][j] != arr[i-1][j-1])
                    count ++;
            }
        }


        int l;
        cin>>l;
        while(l--)
        {
            int x,y,v;
            cin>>x>>y>>v;
            x--;
            y--;
            int old =arr[x][y];
            arr[x][y] = v;
            if(x-1 >=0 && y-1 >=0)
            {
                if(arr[x-1][y-1] == arr[x][y] && (arr[x][y] != old))
                    count --;
            }
            if(x+1 <n && y+1 <m)
            {
                if(arr[x+1][y+1] == arr[x][y] && (arr[x][y] != old))
                    count --;
            }


            if(x-1 >=0 && y-1 >=0)
            {
                if(arr[x-1][y-1] != arr[x][y] && (arr[x-1][y-1] == old))
                    count ++;
            }
            if(x+1 <n && y+1 <m)
            {
                if(arr[x+1][y+1] != arr[x][y] && (arr[x+1][y+1] == old))
                    count ++;
            }
            cout<< (count ==0 ? "yes" : "NO")<<endl;   
        }
    }
return 0;
}
