#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    int q;
    cin>>q;
    while(q--)
    {
        // complexity  O(q)
        int l,r;
        cin>>l>>r;
        arr[l]++;
        if(r+1 <n){
            arr[r+1] --;
        }
    }
    // cumulative sum
    for(int i=1;i<n;i++)
    // complexity  O(n)
    {
        arr[i] +=arr[i-1];
    }

    // printed the array
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

