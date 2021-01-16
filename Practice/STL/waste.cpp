#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n ;
	int m ;
    cin>>n>>m;

	vector<vector<int>> vec( n , vector<int> (m)); 

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin>>vec[i][j];
		}
	}
    int q;
	cin>>q;
    while(q--)
    {
        int x,y,v;
        cin>>x>>y>>v;
        vec[x][y] =v;

		for(int i=1;i<n-1;i++)
			for(int j=1 ; j<m-1; j++)
				if(vec[i][j] == vec[i+1][j+1])
					{
						cout<<"yes"<<endl;
						break;
					}
				
				
				



    }
	cout<<"no";

	
    }	
return 0;
}
