#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node * right;
};

Node* newNode(int val)
{
    Node*temp  = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

Node* insertLevelOrder(int arr[], Node* root, int i,int n)
{
    if(i<n)
    {
        Node* temp =  newNode(arr[i]);
        root = temp;

        // insert left child 
        root->left  = insertLevelOrder(arr, root->left,2*i+1,n);

        // insert right child
        root->right = insertLevelOrder(arr, root->right,2*i+2,n);

    }
    return root;
}

void PrintLevelOrder(Node *root)
{
    if(root == NULL)    return;

    // create an empty queue for level order traversal
    queue<Node *>q;

    // Enqueue root and initialize height
    q.push(root);

    while(q.empty() == false)
    {
        // print front of queue and remove it from queue
        Node *node = q.front();
        cout<<node->data<<" ";
        q.pop();

        // enqueue left child
        if(node->left != NULL)
        {
            q.push(node->left);
        }

        //enqueue right child
        if(node->right != NULL)
        {
            q.push(node->right);
        }   
    }
}
// given a binary tree , print its nodes in reverse level order
void reverseLevelOrder(Node* root)
{
    stack<Node* > S;
    queue<Node* >Q;
    Q.push(root);


    while(Q.empty() == false)
    {
        // dequeue node and make it root
        root= Q.front();
        Q.pop();
        S.push(root);

        // Enqueue right child
        if(root->right)
        {
            Q.push(root->right);
        }
        if(root->left)
        {
            Q.push(root->left);
        }
    }
    while (S.empty() == false)
    {
        root = S.top();
        cout<<root->data<<" ";
        S.pop();
    }
}

// Function to print tree nodes in Inorder fashion
void inOrder(Node*root)       // Inorder (Left, Root, Right) 
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
//Function to print tree nodes in Preorder fashion
void PreOrder(Node* root)       // Preorder (Root, Left, Right)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
//Function to print tree nodes in Postorder fashion
void PostOrder(Node*root)
{
    if(root!=NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,6,6,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = insertLevelOrder(arr,root,0,n);
    //inOrder(root);
    //PreOrder(root);
    //PostOrder(root);
    //reverseLevelOrder(root);
    PrintLevelOrder(root);
}

