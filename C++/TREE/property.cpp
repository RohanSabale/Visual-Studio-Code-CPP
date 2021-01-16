// 1.The maximum number of nodes at level ‘l’ of a binary tree is 2^l.
// 2. Maximum number of nodes in a binary tree of height ‘h’ is 2^h – 1.
// 3. In a Binary Tree with N nodes, minimum possible height or minimum number of levels is  ? Log2(N+1) 
// 4.  A Binary Tree with L leaves has at least   ? Log2L ? + 1   levels


// Types of Trees
// 1.        Full Binary Tree A Binary Tree is a full binary tree if every node has 0 or 2 children
// In a Full Binary Tree, number of leaf nodes is the number of internal nodes plus 1 
//     L = I + 1 
//      Where L = Number of leaf nodes, I = Number of internal nodes 


// 2.   Complete Binary Tree: A Binary Tree is a complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible 

// 3. Perfect Binary Tree A Binary tree is a Perfect Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level. 
// A Perfect Binary Tree of height h (where the height of the binary tree is the longest path from the root node to any leaf node in the tree) has 2^(h+1) – 1 node. 

// 4. A degenerate (or pathological) tree A Tree where every internal node has one child. Such trees are performance-wise same as linked list. 

 10
      /
    20
     \
     30
      \
      40     



// What is Handshaking Lemma?
//Handshaking lemma is about undirected graph. In every finite undirected graph, an even number of vertices will always have odd degree 
//The handshaking lemma is a consequence of the degree sum formula (also sometimes called the handshaking lemma)
//\sum_{u \epsilon v} deg(v) = 2\left | E \right |

// In a k-ary tree where every node has either 0 or k children, following property is always true.

  L = (k - 1)*I + 1
Where L = Number of leaf nodes
      I = Number of internal nodes  

// in Binary tree, number of leaf nodes is always one more than nodes with two children.

L = T + 1
Where L = Number of leaf nodes
      T = Number of internal nodes with two children 


// How many different Unlabeled Binary Trees can be there with n nodes?
 T(n) = (2n)! / (n+1)!n!

 // How many labeled Binary Trees can be there with n nodes?
        Number of Labeled Tees = (Number of unlabeled trees) * n!
                       = [(2n)! / (n+1)!n!]  × n!


What are BFS and DFS for Binary Tree?
A Tree is typically traversed in two ways:

    Breadth First Traversal (Or Level Order Traversal)
    Depth First Traversals
        Inorder Traversal (Left-Root-Right)
        Preorder Traversal (Root-Left-Right)
        Postorder Traversal (Left-Right-Root)



