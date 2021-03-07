#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

using namespace std;
// runs infinite while loop there is an error needs to be resolved
int main()
{
     boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif

    int r,c;
    cin>>r>>c;
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int x;// number to be searched
    cin>>x;

    int i=0;
    int n = sizeof(matrix)/sizeof(matrix[0]) ;   // pointer for last of the first row
    int j =n-1;

    while(i<n  &&  j>=0)
    {
        if(x ==matrix[i][j])
        {
            cout<<"matrix found"<<i<<" "<<j;
        }
        else if (x<matrix[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<x<<" "<<"not found"<<"\n";
  
}
