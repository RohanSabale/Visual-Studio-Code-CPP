#include<bits/stdc++.h>
using namespace std;

void pascal(int n)
{
    
    int arr[n][n] ;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            if(j==0 || j==i)
                arr[i][j] = 1;
            else
            {
                arr[i] [j] = arr[i-1] [j-1] + arr[i-1][j];
            }    
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}



void binomial(int n)
{
   
    for(int i=1;i<=n;i++)
    {
         int c=1;
        for(int j=1; j<=i;j++)
        {
              cout<<c<<" "; 
              c = c* (i-j) / j ;

        }
        cout<<endl;
    }

}
int main()
{
    //pascal(7);
    binomial(5);
    return 0;
}
