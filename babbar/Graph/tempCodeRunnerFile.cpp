#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Vec;
vector<bool>visited;

bool isCyclicUtil(vector<vector<int>>Vec , vector<bool>visited , int curr)
{
    if(visited[curr] == 2)
        return true;
    
    visited[curr] = 1;
    bool FLAG = false;
    for(int i = 0;i<Vec.size();i++)
    {