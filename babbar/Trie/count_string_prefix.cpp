//Count the number of words with given prefix

#include<bits/stdc++.h>
using namespace std;

struct TrieNode
{
    // using map to store the pointers 
    // of childern nodes for dynamic
    // implementation , for making the 
    // program space efficient

    map<char , TrieNode*>children;

    // if isEndofWord is true , then 
    // node represents , end of word

    bool isEndofWord;

    // num represents number of times
    // a character has appeared during 
    // insertion of the words in the trie

    map<char,int >num;
};

// declare root node
struct TrieNode * root;

// function to create New Trie Node
struct TrieNode * getNewTrieNode()
{
    struct TrieNode * pNode  = new TrieNode;
    pNode ->isEndofWord = false;
    return pNode;
}

// function to insert  a string in trie
void insertWord(string word)
{
    // to hold the value of root
    struct TrieNode * current =  root;

    // to hold the letters of the word
    char s;

    // traverse through strings in list
    for(int i = 0;i<word.length();i++)
    {
        s= word[i];

        // is s is not present in the 
        //character field of current node
        if(current->children.find(s) ==current->children.end())
        {
            // get new node
            struct TrieNode * p = getNewTrieNode();

            // insert s in characte
            //fiels of current node
            // with reference to node p
            (current ->children)[s] = p;

            //insert s in num field
            // of current node with
            // value 1
            (current->num)[s] = 1;
        }
        else
        {
            // increment the count
            //corresponding to the 
            // character s
            current->num[s] = (current->num)[s] +1;
        }

        // go to next node
        current = (current ->children)[s];
    }
    current->isEndofWord   = true;
}

// function to count the number of
// words in trie with given prefix

int countWords(vector<string>&words , string prefix)
{
    root = getNewTrieNode();

    // size of list of string
    int n= words.size();

    // construct trie containing all the words
    for(int i =0;i<n;i++)
    {
        insertWord(words[i]);
    }

    struct TrieNode * current = root;
    char s;

    // initialize the wordCount = 0
    int wordCount = 0;

    for(int i = 0;prefix[i];i++)
    {
        s = prefix[i];
        //if the complete prefix is not present in the trie
        if(current->children.find(s) == current->children.end())
        {
            //make wordCount  = 0 and 
            // break out of loop
            wordCount = 0;
            break;
        }

        //update the wordCount
        wordCount = (current->num)[s];

        // go to next node
        current = (current->children)[s];

    }
    return wordCount;
}

int main()
{
    // input list of words
    vector<string> words;
    words = { "apk", "app", "apple",
              "arp", "array" };
 
    // Given prefix to find
    string prefix = "ap";
 
    // Print the number of words with
    // given prefix
    cout << countWords(words, prefix);
    return 0;
}