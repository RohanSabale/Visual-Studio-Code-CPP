// from a sorce vertex  v, find the shortest distance to all
// other nodes in the graph.

//idea
// 1. Initially d[v] = 0 and for all other elements d[] = infinity
// 2. in each pass , relax all the edges 
//                     i.e , for edge (a,b) having weight w,
//                     d[b] = min(d[b],d[a] + w)
// 3 . Assuming no negative edge cycle , since there are n vertices , shortest 
// path can only contain 'n-1' edges . Therefore , we will get out answer in at 
// most 'n-1' passes.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
}