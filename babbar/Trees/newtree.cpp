#include<bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node* left;
    struct Node*right;
};

Node * CreateNode(int data)
{
    Node* newNode = new Node();
    if(!newNode)
    {
        cout<<"Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* InsertNode(Node* root , int data)
{
    // if the tree is empty , assign new node address to root
    if(root == NULL)
    {
        root = CreateNode(data);
        return root;
    }

    // else , do level order traversal until we find an empty place
    //i.e either left child ot right child of some
    //node is pointing to NULL.

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node*temp = q.front();
        q.pop();

        if(temp->left!=NULL)
            q.push(temp->left);
        else{
            temp->left = CreateNode(data);
            return root;
        }

        if(temp->right != NULL)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right  = CreateNode(data);
            return root;
        }
    }
}

void printInorder(Node * temp)       // left , root,right
{
    if(temp == NULL)
        return;
    printInorder(temp->left);
    cout<<temp->data<< " ";
    printInorder(temp->right);
}

void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    /* first print data of node */
    cout << node->data << " ";
 
    /* then recur on left sutree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}

void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    cout << node->data << " ";
}

int main()
{
    struct Node* root = CreateNode(1);
    root->left = CreateNode(2);
    root->right  = CreateNode(3);
    root->left->left = CreateNode(4);
    root->left->right = CreateNode(5);
    root->right->left = CreateNode(6);
    //root->right->right = CreateNode(7);

    cout<<"inorder traversal before insertion   ";
    printInorder(root);
    cout<<endl;

    int key  =  7;
    root = InsertNode(root,key);
    cout<<"Inorder traversal after insertion";
    printInorder(root);

    return 0;

}


