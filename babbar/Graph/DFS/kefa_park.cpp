/*
Kefa decided to celebrate his first big salary by going to the restaurant.

He lives by an unusual park. The park is a rooted tree consisting of n vertices with the root at vertex 1. Vertex 1 also contains Kefa's house. Unfortunaely for our hero, the park also contains cats. Kefa has already found out what are the vertices with cats in them.

The leaf vertices of the park contain restaurants. Kefa wants to choose a restaurant where he will go, but unfortunately he is very afraid of cats, so there is no way he will go to the restaurant if the path from the restaurant to his house contains more than m consecutive vertices with cats.

Your task is to help Kefa count the number of restaurants where he can go.
Input

The first line contains two integers, n and m (2 ≤ n ≤ 105, 1 ≤ m ≤ n) — the number of vertices of the tree and the maximum number of consecutive vertices with cats that is still ok for Kefa.

The second line contains n integers a1, a2, ..., an, where each ai either equals to 0 (then vertex i has no cat), or equals to 1 (then vertex i has a cat).

Next n - 1 lines contains the edges of the tree in the format "xi yi" (without the quotes) (1 ≤ xi, yi ≤ n, xi ≠ yi), where xi and yi are the vertices of the tree, connected by an edge.

It is guaranteed that the given set of edges specifies a tree.
Output

A single integer — the number of distinct leaves of a tree the path to which from Kefa's home contains at most m consecutive vertices with cats.
Examples
Input
Copy

4 1
1 1 0 0
1 2
1 3
1 4

Output
Copy

2

Input
Copy

7 1
1 0 1 1 0 0 0
1 2
1 3
2 4
2 5
3 6
3 7

Output
Copy

2
*/


#include<bits/stdc++.h>
using namespace std;


void dfs(vector<int>*edges , int start, int* vis, int m , int count ,int arr[] )
{
    vis[start] = 1;
    for(int i = 0;i<edges[start].size();i++)
    {
        int temp = edges[start][i];
        int cc = count;
        if(vis[temp] == 0)
        {
            if(arr[temp] == 1 && arr[start] == 1)
            {
                cc+=1;
            }
            else if(arr[temp] == 1)
            {
                cc = 1;
            }
            else
            {
                cc = 0;
            }
            if(cc > m)
            {
                continue;
            }
            dfs(edges , temp , vis ,m ,cc ,arr);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    #endif

    int n , m;
    cin>>n>>m;
    vector<int>*edges = new vector<int>[n];
    int* arr = new int[n]();
    int* vis = new int[n]();
    
   

    for(int i = 0;i<n ;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<n-1 ;i++)
    {
        int l , r;
        cin>>l>>r;
        edges[l-1].push_back(r-1);    // l-1 and r-1 because of 0 based indexing
        edges[r-1].push_back(l-1);
    }

    int count = 0;
    if(arr[0] == 1)
    {
        count = 1;
    }
    dfs(edges , 0 , vis , m , count , arr);

    int ans = 0;
    for(int i = 0;i<n ;i++)
    {
        if(vis[i] == 1 && edges[i].size() == 1  && i!=0)    // edges[i].size() == 1 because leaf has only one parent above
        // i!= 0 means it should be not root node
        {
            ans++;

        }
    }
    cout<<ans<<endl;



    return 0;

}