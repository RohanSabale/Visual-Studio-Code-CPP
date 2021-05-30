// Binary Search Tree 

// Notes 
// 1. in bst , a node at max can hava two childrens(Left,Right)
// 2. Binary search tree is a binary tree data structure which has the follo
// wing properties
//         a. the left subtree of a node'A' should contain all the nodes
//         with lesser value than 'A'. 
//         b. the right subtree of a node 'A' should contain all the nodes with 
//         higher value than 'A';
//         c. the left and right subtree also must be a binary search tree 
// 3. it is like having sorted data in tree 
// 4. in order to have sorted data in tree , tree should have the above three 
//     properties


// Benifits:
// 1. instead of using sorted array if we use BST then comlexity of insert , delete 
//     becomes log(n);
// 2. as it maintains sorted elements you have all advantages of data being sorted 
 

//  Complexity:
//  1. search,insert , delete complexity log2(n)
//  2. space complexity  O(n)


// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node*left;
//     Node * right;
//     Node(int data) : data{data} , right {nullptr} , left{nullptr} { }
// };


// Node * insert(Node *head ,  int data)
// {
//     if(head == nullptr)  
//     {
//         return  new Node(data);     // this is the first node

//     }     

//     if(head->data >data)
//     {
//         head ->left  = insert(head->left , data);
//     }
//     else
//     {
//         head->right = insert(head->right,data);
//     }
//     return head;
// }


// void printInorder(Node *head)
// {
//     if(head == NULL)
//     {
//         return;
//     }
//     printInorder(head->left);
//     cout<<head->data<<" ";
//     printInorder(head->right);
// }



// int main()
// {
//     int N,val;
//     cin>>N;         // no of nodes
//     cin>>val;
//     N--;
//     Node *head = insert(nullptr , val);         // head is root

//     while(N--)
//     {
//         cin>>val;
//         insert(head, val);
//     }

//     printInorder(head);
//     return 0;
// }


// input 
// 6
// 5
// 2
// 3
// 1
// 9
// 7

// output
//1 2 3 5 7 9 





// create binary search tree

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n
}