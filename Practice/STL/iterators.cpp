#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int > values = {1,2,3,4,5};

  /*  for ( int i=0; i <values.size();i++)
    {
        cout<<values[i]<<endl;  
    }
    */

   for (int value : values)             // iterator same result as above
    cout<<value<<endl;              // works with array also
}