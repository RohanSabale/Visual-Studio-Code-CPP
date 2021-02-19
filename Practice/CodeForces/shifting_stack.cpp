/*
                            Shifting Stacks
    You have   stacks of blocks. The  -th stack contains     blocks and it's height is the number of blocks in it. In one move you can take a block from the  -th stack (if there is at least one block) and put it to the  

-th stack. Can you make the sequence of heights strictly increasing?

Note that the number of stacks always remains  
: stacks don't disappear when they have  

blocks.
Input

First line contains a single integer  
   

— the number of test cases.

The first line of each test case contains a single integer  
 . The second line of each test case contains   integers          

— starting heights of the stacks.

It's guaranteed that the sum of all  
does not exceed    

.
Output

For each test case output YES if you can make the sequence of heights strictly increasing and NO otherwise.

You may print each letter in any case (for example, YES, Yes, yes, yEs will all be recognized as positive answer).
input :
6
2
1 2
2
1 0
3
4 4 4
2
0 0
3
0 1 0
4
1000000000 1000000000 1000000000 1000000000


op:
YES
YES
YES
NO
NO
YES


*/
#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;


void solve(){
	int n; cin>>n;
	long long A[n], s=0;
	for(int i=0; i<n; i++)cin>>A[i];
	for(int i=0; i<n; i++){
		s+=A[i]-i;
		if(s<0){
			cout<<"NO"<<endl; return;
		}
	}
	cout<<"YES"<<endl;
}


int main()
{
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
    clock_t z = clock();

int t; cin>>t;
	while(t--) solve();
	return 0;


    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);

    
    
}