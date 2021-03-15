// next greater element using stack
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {13,7,6,12,10};
    vector<int>gse;

    stack<int>s;           // creating stack
    s.push(arr[0]);

    for(int i=1;i<5;i++)
    {
        if(s.empty())        // is stack is empty then push the element
        {
            s.push(arr[i]);
            continue;
        }

        while(s.empty() == false  &&  s.top() <arr[i])
        {
            cout<<s.top()<<"---->" <<arr[i] <<endl;
            s.pop();
        }
        s.push(arr[i]);      // smaller or equal elements can be pushed over top element of stack

    }
    /*
    while(s.empty() == false)
    {
        cout<<s.top()<<" ---->"<<-1<<endl;
        s.pop();
    }
    */

}