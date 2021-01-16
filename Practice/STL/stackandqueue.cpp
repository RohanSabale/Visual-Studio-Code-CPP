#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;     // in stack you can access only top most element
    // while in vector you can access an element
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

	cout<<st.top()<<endl;       // accesing the top most element
    st.pop();                              // deleting the top most element

    // queue
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    qu.push(6);

    // delete the element
    qu.pop();

    // access the front element
    cout<<qu.front()<<endl;
    cout<<qu.back()<<endl;



    deque<int> dqu;
    dqu.push_back(10);    // adding at the bcak
    dqu.push_front(20);   // add the element to the front
    dqu.pop_back();      // remove the last element
    dqu.pop_front();  // remove the first element



    // linked list
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);

    li.push_front(1);
    li.push_front(2);
    li.push_front(3);
    li.push_front(4);
    li.push_front(5);

    li.pop_back();
    li.pop_front();


    li.reverse();                        // reverse the linked list
    cout<<li.front()<<endl;   // access the head of the linked list
    cout<<li.back();               // access the tail of the linked list

    return 0;
}
