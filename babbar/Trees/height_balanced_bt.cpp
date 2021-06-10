// balanced height tree -> for each node , the difference between the heights of the 
// left subtree and right subtree<=1
//mod(left height - right height) <=1


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * left , *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh ,rh) +1;
}
bool isBalanced(Node * root)
{
    if(root == NULL)
    {
        return true;
    }
    if(isBalanced(root->left) == false)
    {
        return false;
    }
    if(isBalanced(root->right) == false)
    {
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <=1)
    {
        return true;
    }
    else{
        return false;
    }
}

bool isBalancedOptimized(Node* root , int * height)          // by this function time complexity
// is reduced from O(n^2) to O(n)
{
    if(root ==NULL)
    {
        return true;
    }
    int lh = 0, rh = 0;
    if(isBalancedOptimized(root->left , &lh) == false)
    {
        return false;
    }
    if(isBalancedOptimized(root->right , &rh) == false)
    {
        return false;
    }

    *height  = max(lh , rh) +1;

    if(abs(lh-rh) <=1)
    {
        return true;
    } 
    else{
        return false;
    }

}

int main()
{
    Node *root1 = new Node(1);
    root1->left= new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    // balanced tree

/*
                     1
                /         \
            2               3
        /       \          /    \
        4         5      6        7
*/

    // Node*root1 = new Node(1);
    // root1->left = new Node (2);
    // root1->left->left =new Node(3);
    // //Not balanced 
    /*
                    1
                    /
                2
            /
        3
    */
    
    if(isBalanced(root1))
    {
        cout<<"Balanced tree"<<endl;
    }else
    {
        cout<<"unbalanced tree"<<endl;

    }
    return 0;


//     int height = 0;
//     if(isBalancedOptimized(root1 , &height) == true)
//     {
//         cout<<"Balanced tree"<<endl;
//     }
//     else
//     {
//         cout<<"unbalanced tree"<<endl;
//     }
// }