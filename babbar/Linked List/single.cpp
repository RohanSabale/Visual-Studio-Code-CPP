// singly linked list
/*
1.a linked list is a data structure formed by nodes in the form of chain.
2.each node consist of data and pointer to next node
3.the linked list in which each node has one pointer that has reference to next 
value is called singly linked list.
4. IT has unidirectional link       (straight only)

last node points to NULL.
*/

//operations in linked list
/*
1. Insertion - inserting a node(head , tail , after nth node)
2. searchng - searching an element in the linked list.
3. deletion - deleting a node from a linked list.
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*next;          // pointer to next node
};
Node*head = NULL;

void insertatTail(int data)
{
    Node*NewNode = new Node();          // creata a new node
    NewNode->data = data;                   // data for new node
    if(head == NULL)        // no node in linked list
    {
        head = NewNode;     // head points to new node
        return;
    }
    Node*temp = head;           
    while(temp->next != NULL)       // we need to reach the end of the tail
    {
        temp = temp->next;
    }
    temp->next = NewNode;       // last node pointing to null
    NewNode->next = NULL;           // end pointing to null
}

void insertatHead(int data)
{
    Node * NewNode = new Node();
    NewNode ->data = data;
    if(head == NULL)
    {
        head = NewNode;
        return;
    }
    NewNode->next = head;
    head = NewNode;
}
void insertAfterNode(int value , int data)
{
    value--;        // 0 based indexing
    Node*NewNode = new Node();
    NewNode->data = data;
    if(head == NULL)
    {
        head = NewNode;
        return;
    }
    Node*temp  = head;
    while(temp->next !=NULL && value >0)
    {
        temp = temp->next;
        value--;
    }
    Node*temp2 = temp->next;
    temp ->next = NewNode;
    NewNode->next = temp2;
}

void printList()
{
    Node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool searchNode(int value)
{
    Node*temp = head;
    if(temp->data == value)     return true;
    while(temp->next != NULL)
    {
        temp = temp->next;
        if(temp->data == value)     return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    insertatTail(5);
    printList();

    insertatTail(2);
    printList();

    insertatHead(3);
    printList();

    insertatHead(11);
    printList();

    insertAfterNode(2,7);
    cout<<searchNode(5)<<endl;
    printList();


    return 0;
}

/*
5 
5 2 
3 5 2
11 3 5 2
1
11 3 7 5 2
*/