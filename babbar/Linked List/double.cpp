/*
-> in doubly linked list along with the next pointer there is a previous pointer
also which points to previous node. That previous node allows us to move
backward/ previous node in the linked list.

advantages:
1. Bi directional traversal
2. Deletion form back in O(1) time.

operations :
1. add a new node in DLL(front , end)
2. Remove a node from DLL
3. Search a node in DLL
*/
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*prev;
    Node*next;
};

void Doubly_linked_list :: add_front(int d)
{
    node * temp;
    temp = new node();
    temp->data = d;
    temp->prev = NULL;
    temp->next = front;
    if(front == NULL)
        end = temp;
    else
        front ->prev = temp;
    front = temp;
}

void Doubly_linked_list :: add_end(int d) 
{
    node * temp;
    temp = new node();
    temp->data = d;
    temp->prev = end;
    temp->next = NULL;

    if(end == NULL)
        front = temp;
    else
        end->next = temp;
    end = temp;
}

void Doubly_linked_list :: delete_node(node *n)
{
    if(n->prev == NULL)
    {
        front = n->next;
        front->prev = NULL;
    }
    else if(n->next == NULL)
    {
        end = n->prev;
        end->next = NULL;
    }
    else
    {
        n->prev->next = n->next;        // middle node
        n->next->prev = n->prev;        // middle node
    }
    delete(n);
}

int search(Node** head_ref , int x)
{
    Node* temp = *head_ref;
    int pos = 0;

    while(temp->data != x && temp->next != NULL)
    {
        pos++;
        temp = temp->next;
    }
    if(temp->data != x)
        return -1;
    
    return (pos+1);
}
