// Write a function that reverses a string. The input string is given as an array of characters s.


// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]


#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&V)
{
    int n = V.size();
    int start = 0;
    int end = V.size();

    for(int i =0;i<n;i++)
    {
        while(start>end)
        {
        swap(V[start] , V[end]);
        start ++;
        end--;
        }
    }
    for(auto v:V)
    {
        cout<<v<<endl;
    }
}

int main()
{
    
    reverse(V);
}