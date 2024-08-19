#include<iostream>
using namespace std;

class Node{
    public:
    Node * child[26];
    bool end = false;
    int childcount = 0;
    
    Node(){
        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
    }
};

class Trie{
    public:
    Node * root = new Node;
    
    void insert(string word){
        Node * curr = root;
        for(int i=0;i<word.size();i++){
            int index = word[i] - 'a';
            if(curr->child[index]==NULL){
                curr->childcount++;
                curr->child[index] = new Node();
            }
            curr = curr->child[index];
        }
        curr->end = true;
    }
    
    void getlongest(string word,string & ans){
        Node * curr = root;
        
        for(int i=0;i<word.size();i++){
            int index = word[i]-'a';
            if(curr->childcount==1){

                ans.push_back(word[i]);
                curr=curr->child[index];
            }
            else{
                break;
            }
            if(curr->end){
                break;
            }
        }
    }
    void print(){
        cout<<root->childcount;
    }
    
};
int main(){
    Trie t;
    t.insert("abcd");
    t.insert("abc");
    t.insert("efgh");
    cout<<"insert successfull"<<endl;
    t.print();
    string ans = "";
    t.getlongest("abc",ans);

    cout<<ans;
}