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

Node* Construct(int arr[], int low , int high)
{
    if(low >high)
    {
        return NULL;
    }
    
    int mid = (low+high)/2;

    int data = arr[mid];
    Node lc =Construct(arr,low,mid-1);
    Node rc = Construct(arr,mid+1,high);

    Node node = newNode(data,lc,rc);
    return node;

}
void printInorder(Node* node)
{
    if(node == NULL)
    {
        return;
    }
    printInorder(node ->left);
    cout<<node->data<<" ";
    printInorder(node->right);
}

int main()
{
    int arr[7] = {12,25,37,50,62,75,85};
    Node* root= Construct(arr,0,6);
    cout<<"inorder traversal of the constructed tree is""\n";
    printInorder(root);

    return 0;

    
}