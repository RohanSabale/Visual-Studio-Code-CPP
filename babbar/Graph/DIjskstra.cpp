// single sorce shortest path 

// mark all vertices as unvisited initially
// mark all nodes with infinity distance initially except source node

// repeat the following for(v-1) times:
// 1.pick the min value node which is unprocessed
// 2. Mark this node as processed(u-->v)
// 3. update all adjacent vertices 
//     if cost[u] + wt[u,v] < cost[v]  update
//     else skip

// if labels are sequential then array is prferrable
// if labels are non sequential then set is msotly preferrable

// requrements
// 1. use a  visited array /set.
// 2. use value array / map
// 3. store shortest path graph.
//     use parent array 

//     u--> v     parent [v] = u
