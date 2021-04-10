#include<bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;


struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
    bool isEndofWord;
};

struct TrieNode *getNode(void)
{
    struct TrieNode *pnode = new TrieNode;

    pnode->isEndofWord = false;
    for(int i = 0;i<ALPHABET_SIZE;i++)
    {
        pnode->children[i] = NULL;
    }
    return pnode;
}

void insert(struct TrieNode* root , string key)
{
    struct TrieNode *pCrawl = root;

    for(int i =0;i<key.length();i++)
    {
        int index = key[i] - 'a';
        if(!pCrawl ->children[index])
            pCrawl->children[index] = getNode();

            pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndofWord = true;
}

bool search(struct TrieNode*root,string key)
{
    struct TrieNode * pCrawl =  root;

    for(int i= 0;i<key.length();i++)
    {
        int index = key[i] - 'a';
        if(!pCrawl ->children[index])
            return false;
        
        pCrawl = pCrawl->children[index];
    }
    return (pCrawl != NULL && pCrawl->isEndofWord);
}

// Returns true if root has no children, else false
bool isEmpty(TrieNode*root)
{
    for(int i = 0;i<ALPHABET_SIZE;i++)
    {
        if(root->children[i])
            return false;

    }
    return true;
}

// Recursive function to delete a key from given trie
TrieNode *remove(TrieNode* root, string key, int depth  = 0)
{
    //if tree is empty
    if(!root)
        return NULL;

    // if last character of key is being processed
    if(depth == key.size())
    {
        // this node is no more end of word after 
        // removal of given key
        if(root->isEndofWord)
            root->isEndofWord = false;

        //if given is not prefix of any other word
        if(isEmpty(root))
        {
            delete (root);
            root = NULL;
        }
        return root;
    }

    // if not last character , recur for the chils 
    // obtained using ASCII value
    int index = key[depth] - 'a';
    root ->children[index]= remove(root->children[index],key,depth+1);

    // if root does not have any child (its only child got deleted) , 
    // and it is not the end of another word;
    if(isEmpty(root) && root ->isEndofWord == false)
    {
        delete (root);
        root = NULL;
    }
    return root;
}


 

int main()
{
    string keys[]  = { "the", "a", "there",
                      "answer", "any", "by",
                      "bye", "their", "hero", "heroplane" };
    
    int n = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode * root = getNode();

    for(int i = 0;i<n;i++)
    {
        insert(root,keys[i]);
    }
    search(root, "the") ? cout << "Yes\n" : cout << "No\n";
    search(root, "these") ? cout << "Yes\n" : cout << "No\n";
 
    remove(root, "heroplane");
    search(root, "hero") ? cout << "Yes\n" : cout << "No\n";
    return 0;
}