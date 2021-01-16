#include<bits/stdc++.h>
using namespace std;


class Node{                           // class is a user defined data type and it works as a object constructor and works as a blue print for creating objects
    public :
        int data;
        Node * next;
};
void printList(Node *n)      // function for printing the list
{
    while(n!= NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
 /* Given a node prev_node, insert a new node after the given prev_node */

int main()
{

    // allocating three nodes in heap
    Node *head = NULL;
    Node * second =  NULL;
    Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head ->data = 1;
    head ->next = second;

    second->data=2;
    second->next=third;

    third->data = 3;
    third->next = NULL;

   
    printList(head);

    return 0;
}