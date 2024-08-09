#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }    
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        // base case
        if(word.length()==0){
            root->isTerminal = true;
            return;
        }

        //assumption word will be in capital letter
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        //absent
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recursion

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool serachUtil(TrieNode* root, string word){
        // base case
        if(word.length()==0){
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        // recursion
        return serachUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return serachUtil(root,word);
    }

    bool prefixUtil(TrieNode* root, string word){
        // base case
        if(word.length()==0){
            return true;
        }
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //recursion
        return prefixUtil(child, word.substr(1));
    }

    bool startWith(string prefix){
        return prefixUtil(root,prefix);
    }
};

int main()
{
    Trie *t = new Trie();

    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    t->insertWord("PARUL");
    cout<<"Present or not "<< t->searchWord("PARUL")<<endl;

    return 0;
}