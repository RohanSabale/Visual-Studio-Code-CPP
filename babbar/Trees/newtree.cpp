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

// function to delete the given deepest node(d_node) 
// in binary tree

void deletDeepest(struct Node*root , struct Node*d_node)
{
    queue<struct Node *>q;
    q.push(root);

    // do level order traversal until last node
    struct Node*temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp == d_node)
        {
            temp == NULL;
            delete(d_node);
            return;
        }
        if(temp->right)
        {
            if(temp->right ==d_node)
            {
                temp->right = NULL;
                delete(d_node);
                return;
            }
            else
            {
                q.push(temp->right);
            }
        }
        if(temp->left)
        {
            if(temp->left == d_node)
            {
                temp->left =NULL;
                delete(d_node);
                return;
            }
            else
            {
                q.push(temp->left);
            }
        }
    }
}


// function to delete element in binary tree
Node* deletion(struct Node* root , int key)
{
    if(root == NULL)
        return NULL;
    
    if(root->left == NULL && root->right  ==NULL)
    {
        if(root ->data == key)
            return NULL;
        else
            return root;
    }

    queue<struct Node*> q;
    q.push(root);

    struct Node* temp;
    struct Node*key_node = NULL;

    // do level order traversal to find deepest node(temp)
    // and node to be deleted(key_node)

    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        if(temp->data == key)
            key_node = temp;
        
        if(temp->left)
            q.push(temp->left);
        
        if(temp->right)
            q.push(temp->right);
    }
    if(key_node!=NULL)
    {
        int x =temp->data;
        deletDeepest(root , temp);
        key_node->data = x;
    }
    return root;
    
}


// all traversal require O(n) time 
//breadth first traversal(or level order traversal)
// space required is O(w) where w is maximum widhth of binary tree

// Points
// depth first traversal are typically recursive and recursive code requires
// function call overhead
// bfs starts visiting node from root while DFS starts visiting node from leaves.
// so if we have to search something that is more likely to closer to root , 
// we would prefer BFS, and if the target node is close to a leaf , we would prefer DFS


// all these  3 are depth first traversal where h is maximum height of Binary tree
// space requires is O(h) 

void printLevelOrder( Node* root)
{
    if(root == NULL)
        return;
    
    // create an empty queue for level order traversal
    queue<Node*> q;

    // ensure root and initialize height
    q.push(root);

    while(q.empty() == false)
    {
        // print front of queue and remove if from queue
        Node * node  = q.front();
        cout<<node->data<<" ";
        q.pop();

        //enqueue left child
        if(node->left != NULL)
            q.push(node->left);

        // enqueue right child
        if(node->right != NULL)
            q.push(node->right);
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

void printPreorder(struct Node* node)   // root,left ,right
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

void printPostorder(struct Node* node)  //left , right ,root
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
    root->right->right = CreateNode(7);

    // cout<<"inorder traversal before insertion   ";
    // printInorder(root);
    // cout<<endl;

    // int key  =  7;
    // root = InsertNode(root,key);
    // cout<<"Inorder traversal after insertion";
    // printInorder(root);

    cout<<"level order traversal of binary tree is \n";
    printLevelOrder(root);


    // int key =2 ;
    // root= deletion(root, key );
    // cout<<endl;
    // cout<<"inorder traversal after deletion";
    // printInorder(root);

    // return 0;

}