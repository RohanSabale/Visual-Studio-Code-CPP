// given the element of binary tree in an array format . You need to return 
// an array format . You need to return the number of possible ways to reorder
// the elements in the array such that the binary tree is similar to the older one
// sample input - 4,3,5
//output : 1

#include<bits/stdc++.h>
using namespace std;

void calculateFact(int fact[], int N)
{
    fact[0] = 1;
    for (long long int i = 1; i < N; i++) 
    {
        fact[i] = fact[i - 1] * i;
    }
}
 
int nCr(int fact[], int N, int R)
{
    if (R > N)
        return 0;
    int res = fact[N] / fact[R];
    res /= fact[N - R];
 
    return res;
}
 
int countWays(vector<int>& arr, int fact[])
{
    int N = arr.size();
    if (N <= 2) {
        return 1;
    }
    vector<int> leftSubTree;
    vector<int> rightSubTree;
    int root = arr[0];
 
    for (int i = 1; i < N; i++) 
    {
        if (arr[i] < root) 
        {
            leftSubTree.push_back(arr[i]);
        }
        else 
        {
            rightSubTree.push_back(arr[i]);
        }
    }
    int N1 = leftSubTree.size();
    int N2 = rightSubTree.size();
    int countLeft = countWays(leftSubTree, fact);
    int countRight = countWays(rightSubTree, fact);
 
    return nCr(fact, N - 1, N1) * countLeft * countRight;
}
 
int main()
{
    int x;
    vector<int> arr;
    while(cin>>x)arr.push_back(x);
 
    int N = arr.size();
 
    int fact[N];
 
    calculateFact(fact, N);
 
    cout << countWays(arr, fact)-1;
 
    return 0;
}