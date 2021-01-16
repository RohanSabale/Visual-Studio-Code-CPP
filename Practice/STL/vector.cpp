#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(1,0);
    // size of the vector
    cout<<arr.size()<<endl;

    // changing the size in runtime
    for (int i = 1; i < 9; i++)
    // initially the size was 1 but we are able to inculcate 9 elements
    {
        /* code */
        arr.push_back(i);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }

    for (int i = 0; i < 3; i++)
    {
        // changing the size of array in run time 
        /* code */
        arr.pop_back();      // pop_back -> removing last elements  similar to append in python
    }
    cout<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    


    
    
}