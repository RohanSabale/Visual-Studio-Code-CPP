// notes 
// 1. a tree whose nodes can have at most to children is called binary tree.
// 2. as there can be two children of a node we call them left and right child


//  types of binary tree
// 1. full binary tree/ strictly binary tree
// Every node must have two children, except the leaf nodes


// 1. Incomplete binary tree/ almost complete binary tree 
// every node must have two children in all levels except second last level 
// and should be filled from left to right.

// 2. complete binary tree / perfect binary tree 
// Every node must hae two children in all the levels (each level should be 2^L where L is level)

// 3. Left skewed binary tree 
// every node should have only left children

// 4. right skewed binary tree 
// every node should have onl right children


#include<bits/stdc++.h>
using namespace std;

struct Binary       // linked list reperesentation
{
    int data;
    Binary *left ,*right;
    Binary(int data) : data(data) , left{nullptr}  , right(nullptr) { }    // constructor
};

void print_bfs(Binary * root)
{
    if(root == nullptr)
    {
        return;
    }
    cout<<root->data<<" ";
    print_bfs(root->left);
    print_bfs(root->right);
}


int main()
{
    // nodes construction
    Binary*root = new Binary(1);
    Binary * left = new Binary(2);
    Binary *right = new Binary(3);
    Binary *left_left = new Binary(4);
    Binary *left_right = new Binary(5);
    Binary *right_left = new Binary(6);
    Binary *right_right = new Binary(7);


    // connecting node
    root->left = left;
    root->right = right;
    left->left = left_left;   left ->right = left_right;
    right->left = right_left ;  right_left ->right  = right_right;

    // printing nodes
    print_bfs(root);

    // deleting nodes
    delete root;
    delete left;
    delete right;
    delete left_left;
    delete left_right;
    delete right_left;
    delete right_right;
    return 0;
}