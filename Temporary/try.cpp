#include<bits/stdc++.h>
using namespace std;

void add_last(vector<int>&a)
{
    int n = a.size();

    // adding 1 to last digit and find carry
    a[n-1] +=1;
    int carry = a[n-1] /10;
    a[n-1] = a[n-1] %10;

    // traverse from second last digit
    for(int i = 2;i>=0;i--)
    {
        if(carry ==1)
        {
            a[i] +=1;
            carry = a[i] /10;
            a[i] = a[i] %10;
        }
    }
        // if carry is 1 we need to add
        // a1 at the beginning of vector

        if (carry ==1)
        {
            a.insert(a.begin(),1);
        }
    


}

int main()
{
    vector<int>vect{1,7,8,9};
    add_last(vect);

    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
}