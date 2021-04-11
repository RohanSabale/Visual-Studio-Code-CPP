#include<bits/stdc++.h>
using namespace  std;

const int ALPHABET_SIZE =  26;

// Trie Node
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];      //children array of 26 integer pointer

    // isEndofWorld is true if the node represents
    // end of a word
    bool isEndofword;
};

// Returns new trie node(initialized to NULLs)
struct TrieNode *getNode(void)
{
    struct TrieNode *pnode = new TrieNode;

    pnode ->isEndofword = false;

    for (int i =0;i<ALPHABET_SIZE;i++)
    {
        pnode->children[i] = NULL;
    }
    return pnode;
}

// if not present , insert  key into trie
// if the key is prefix of trie node, just 
// mark leaf node

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for(int i = 0;i<key.length();i++)
    {
        int index  = key[i] - 'a';
        if(!pCrawl ->children[index])
        {
            pCrawl->children[index] = getNode();
        }

        pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndofword = true;
}

// Returns true if key presents in trie , else
// false

bool search(struct TrieNode *root,string key)
{
    struct TrieNode *pCrawl =  root;

    for(int i = 0;i<key.length();i++)
    {
        int index = key[i] - 'a';
        if(!pCrawl ->children[index])
            return false;

        pCrawl = pCrawl->children[index];
    }
    return (pCrawl != NULL && pCrawl-> isEndofword);
}

int main()
{
    // input keys(use only 'a ' through 'z 
    // and lower case)

    string keys[] = {"the", "a", "there","answer","any","by","bye","their"};

    int n = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode * root =  getNode();

    // Construct Trie
    for(int i = 0;i<n;i++)
    {
        insert(root,keys[i]);
    }

    // search for different keys
    search(root,"the")?cout<<"yes\n":
                                cout<<"no\n";

    search(root,"these") ?cout<<"yes\n":
                                    cout<<"no\n";

    return 0;
}