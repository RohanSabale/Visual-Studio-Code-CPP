// you will be given the data of two arrays which contains duplicated numbers.
// now you need to remove duplicated numbers and find the median of the 
// sorted array

#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int>&V , int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    vector<int>V;
    int j = 0;

    for(int i = 0;i<n-1;i++)
    {
        
    }
}

int main()
{
    int n,m;
    cin>>n;

    vector<int>A;
    vector<int>B;

    for(int i =0 ;i<n;i++)
    {
        int k;
        cin>>k;
        A.push_back(k);
    }

    cin>>m;
    for(int i = 0;i<m;i++)
    {
        int l;
        cin>>l;
        B.push_back(l);
    }


}