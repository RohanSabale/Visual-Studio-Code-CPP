#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node*left;
    Node*right;
};
 
// Function to create a new node of tree and  return pointer

struct Node * newNode(int key) 
{
    struct Node *temp=new Node;
    temp->key=key;
    temp->left=temp->right=NULL;
    return temp;
};

// Inorder traversal of a binary tree
void inorder(struct Node*temp)
{
    if(!temp)
        return;
    inorder(temp->left);
    cout<<temp->key<<" ";
    inorder(temp->right);
}

// Function to delete the given deepest node(d_node) in binary tree

void deleteDeepest(struct Node *root,struct Node*d_node)
{
    queue<struct Node*>q;
    q.push(root);

    // Do level order traversal until last node
    struct Node*temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if (temp ==d_node){
            temp=NULL;
            delete(d_node);
            return;
        }
        if (temp->right){
            if (temp->right ==d_node){
                temp->right=NULL;
                delete(d_node);
                return;
            }
            else
                q.push(temp->right);
            }
            if (temp->left){
                if (temp->left ==d_node){
                temp->left=NULL;
                delete(d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}

// Function to delete element in binary tree
Node *deletion(struct Node*root,int key)
{
    if (root ==NULL)
        return NULL;
    if (root->left ==NULL &&root->right ==NULL){
        if (root->key==key)
            return NULL;
        else
        {
            return root;
        }
    }
        queue<struct Node*>q;
        q.push(root);
        struct Node*temp;
        struct Node*key_node=NULL;

        // do level order traversal to find deepest node node(temp) and node to be deleted (key_node)
        while(!q.empty()){
            temp =q.front();
            q.pop();

            if (temp->key==key)
                key_node =temp;
            
            if(temp->left)
                q.push(temp->left);

            if(temp->right)
                q.push(temp->right);
        }

        if(key_node !=NULL)
        {
            int x=temp->key;
            deleteDeepest(root,temp);
            key_node->key=x;
        }
        return root;
    }
int main()
{
    struct Node*root=newNode(10);
    root->left=newNode(11);
    root->left->left=newNode(7);
    root->left->right=newNode(12);
    root->right=newNode(9);
    root->right->left=newNode(15);
    root->right->right=newNode(8);

    cout<<"Inorder traversal before deletion";
    inorder(root);

    int key=11;
    root=deletion(root,key);
    cout<<endl;
    cout<<"Inorder traversal after deletion";
    inorder(root);

    return 0;
}