#include<bits/stdc++.h>
using namespace std;

int findCountmap(int arr[] , int length)
{
    unordered_set<int>s;
    int res = 0;
    for(int i =0;i<length;i++)
    {
        if(s.find(arr[i]) == s.end())
        {
            s.insert(arr[i]);
            res++;
        }
    }
    return res;
}


int findCount(int arr[] , int length)
{
    int count =0;
    for(int i =0;i<length;i++)
    {
        int flag =0;
        for(int j=i+1;j<length;j++)
        {
            if(arr[i] ==arr[j])
            {
                flag =1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {5,8,5,7,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<findCount(arr,size)<<endl;
    cout<<findCountmap(arr,size);
    return 0;
}