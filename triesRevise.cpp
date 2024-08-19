#include <iostream>
using namespace std;

class TrieNode
{
public:
    TrieNode * child[26];
    char data;
    bool isterminal;

    TrieNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
        isterminal = false;
    }
};

class Trie
{

public:
    TrieNode *root;
    Trie() { root = new TrieNode('\0'); }

    void insertutil(TrieNode *root, string d)
    {
        if (d.size() == 0)
        {
            root->isterminal = true;
            return;
        }
        TrieNode *c1;
        int index = d[0] - 'a';
        if (root->child[index]!=NULL)
        {
            c1 = root->child[index];
        }
        else
        {
            c1 = new TrieNode(d[0]);
            root->child[index] = c1;
        }
        insertutil(c1, d.substr(1));
    }

    void insert(string data) { insertutil(root, data); }

    bool searchUtil(TrieNode *root, string d)
    {
        if (d.size() == 0)
        {
            return root->isterminal;
        }

        int index = d[0] - 'a';
        if (root->child[index]!=NULL)
        {
            return searchUtil(root->child[index], d.substr(1));
        }
        else
        {
            return false;
        }
    }
    bool search(string d) { return searchUtil(root, d); }
};

int main()
{
    Trie *t1 = new Trie();
    t1->insert("hello");
    bool val = t1->search("helo");
    cout << val;
    // cout << "hello";
}