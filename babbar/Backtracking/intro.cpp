/*
backtracking - algorithmic - technique for solving problems recursively
                        -try to build solution incrementally
                        -remove those solutions that fail to satisfy the constraint of
                         the problem.

            1. do
            2.recursion
            3.undo 
*/

#include<bits/stdc++.h>
using namespace std;

void findPermutations(string s , int left , int right)
{
    if(left == right)
    {
        cout<<s<<endl;
    }
    else
    {
    for(int i = left;i<=right;i++)
    {
        // swapping done
        swap(s[left] , s[right]);
        
        // recursion called
        findPermutations(s , left+1 , right);
        
        //backtrack
        swap(s[left] , s[i]);
    }
    }
    
}

int main()
{
    string s ;
    cin>>s;
    int n = s.size()-1;
    findPermutations(s , 0 , n);
    return 0;
}