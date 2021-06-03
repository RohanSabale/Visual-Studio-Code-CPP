//  Range Sum of BST


// Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].
// Example 1:

// Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
// Output: 32
// Explanation: Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32.

#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
};

Node*newNode(int val)
{
    Node*temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right =  NULL;

    return temp;
}

Node*insertLevelOrder(int arr[] , Node*root , int i , int n)
{
    if(i>n)
    {
        Node*temp = newNode(arr[i]);
        root = temp;

        //left child
        root->left = insertLevelOrder(arr,root->left,2*i+1,n);

        root->right = insertLevelOrder(arr, root->right , 2*i+2,n);
    }
    return root;
}
void inOrder(Node*root)       // Inorder (Left, Root, Right) 
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main()
{
    int arr[] = {10,5,15,3,7,0,18};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node * root = insertLevelOrder(arr , root, 0 , n);
    inOrder(root);
}