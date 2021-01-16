#include<bits/stdc++.h>
using namespace std;

void setDemo()            // here the set internally maintains the ascending order
{
    set<int> S;
    S.insert(1);        // for deleting the number use S.erase(number);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    for (int x: S)
    {
        cout<<x<<"";
        cout<<endl;
    }

    //-10,-1,1,2
    // finding the -1 in set
    auto it =S.find(-1);
    if (it==S.end())
    {
        cout<<"not present";
    }
    else
    {
        cout<<"present";
        cout<<*it<<endl;
    }

    // finding the specific number greater than -1 or 0
    auto it2=S.lower_bound(-1);
    auto it3=S.upper_bound(0);
    cout<<*it2<<" "<<*it3<<endl;

    auto it4 = S.upper_bound(2);
    if (it4==S.end())
    {
        cout<<"oops cant find like that";
    }


    
}



int main()
{
    setDemo();
}