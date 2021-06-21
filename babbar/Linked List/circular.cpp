/*
->circular linked list
it is a type of linked list in which the last node is connected to the first node
-> all the nodes are connected in curcular manner

Advantages:
any point can be the starting point in the circular linked list

operations:
1. Insert : insert a node in circular linked list;
2. delete : delete a node in circular linked list.
3.Search : search a node in circular linked list
*/
#include<bits/stdc++.h>
using namespace std;

void insert(int newdata)
{
    Node *newnode = new Node();
    Node *ptr = head;
    newnode->data= newdata;
    newnode->next = head;
    if(head!=NULL)
    {
        while(ptr->next != head)
        ptr = ptr->next;
        ptr->next = newnode;
    }else
    newnode->next = newnode;
    head= newnode;
}

void deleteNode(Node** head  , int key)
{
    if(*head == NULL)
        return;
    if((*head)->data == key && (*head)->next == *head)
    {
        free(*head);
        *head = NULL;
        return;
    }
    Node *last = *head;
    Node *temp;
    if((*head)->data==key)
    {
        while(last->next!=*head)
            last = last->next;
        last ->next =(*head)->next;
        free(*head);
        *head = last->next;
    }
    while(last->next!=*head && last->next ->data!=key)
    {
        last = last->next;
    }
    if(last->next->data == key)
    {
        temp= last->next;
        last->next = temp->next;
        free(temp);
    }
    else    
        cout<<"no data";
}
 