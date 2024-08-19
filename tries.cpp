#include<iostream>
using namespace std;

class triesnode{
    public:
        char data;
        triesnode* child[26];
        bool isterminal;

        triesnode(char d){
            data = d;
            for(int i=0;i<26;i++){
                child[i] = NULL;
            }
            isterminal  = false;
        }
};

class Trie{
    public:
        triesnode * root;

        Trie(){
            root = new triesnode('\0');
        }


        // void insertUtil(triesnode * root, string word){
        //     if(word.length()==0){
        //         root->isterminal  = true;
        //         return;
        //     }

        //     int index = word[0] - 'a';
        //     triesnode * chil;
        //     if(root->child[index]!=NULL){
        //         chil = root->child[index];

        //     }
        //     else{
        //         chil = new triesnode(word[0]);
        //         root->child[index] = chil;
        //     }

        //     insertUtil(chil,word.substr(1));
        // }
        void insertUtil(triesnode * root,string word){
            
            triesnode * curr = root;

            for(int i=0;i<word.length();i++){
                int index = word[i] - 'a';
                if(curr->child[index]){
                    curr = curr->child[index];
                }
                else{
                    curr->child[index] = new triesnode(word[i]);
                    curr = curr->child[index];
                }
            }
                curr->isterminal = true;
        }

        void insertword(string word){
            insertUtil(root,word);
        }

        bool searchUtil(triesnode * root,string word){
            if(word.length()==0){
                return root->isterminal;
            }

            int index = word[0] - 'a';
            triesnode * chil;

            if(root->child[index]!=NULL){
                chil = root->child[index];
            }
            else{
                return false;
            }

            return searchUtil(chil,word.substr(1));
        }

        bool search(string word){
            return searchUtil(root,word);
        }
};


int main(){

    Trie *t = new Trie();
    (*t).insertword("abhi");
    (*t).insertword("arm");
    cout<<t->search("abhi");
}