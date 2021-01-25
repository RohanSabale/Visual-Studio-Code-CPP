#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>numbers;
    numbers={9,8,6,7,4,5,2,0,3,1};
    partial_sort (numbers.begin() , numbers.begin() + 5 , numbers. end());
    for (auto i : numbers)
            cout<<i<<" ";
    
    return 0;
}