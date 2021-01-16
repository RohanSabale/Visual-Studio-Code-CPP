#include<bits/stdc++.h>
using namespace std;

void sort(int arr[] , int size)
{
    int l=0 , h= size-1, itr=0;
    while(itr<=h)
    {
        if(arr[itr]==0)
        {
            int temp = arr[l];
            arr[l] =arr[itr];
            arr[itr] = temp;
            l++;
            itr++;
        }
        else
        {
            if(arr[itr] == 1)
            {
                itr++;
            }

        }
        else
        {
            if(arr[itr] == 2)
            int temp = arr[h] ;
                arr[h] = arr[itr] ;
                arr[itr] = temp;
                h--;
        }
        
    }
}

int main()
{
    int arr[] = {0,0,1,2,0,2,2,2};
    int size = sizeof(arr) / sizeof(int);
    sort(arr,size);

    for(int i=0;i<size;i++)
        cout<<arr[i] <<" ";
        cout<<endl;
    return 0; 
}