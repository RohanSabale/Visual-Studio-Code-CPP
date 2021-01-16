#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,*ptr;
    cout<<"enter the number";
    cin>>size;
    ptr = new int[size];
    cout<<"Enter values to be stored";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"valus are"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i];
    }
    return 0;
}