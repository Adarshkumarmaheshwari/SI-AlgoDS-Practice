#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    bool check;
    node* child[26];
    node()
    {
        check=false;
        for(int i{0}; i<26; i++){
            child[i]=NULL;
        }
    }
};
void add(string word, node* trie)
{
    int n=word.size();
    for (size_t i = 0; i < n; i++)
    {
        if(trie->child[word[i]-'A']==NULL){
            trie->child[word[i]-'A']= new node();
        }
        trie=trie->child[word[i]-'A'];
    }
    trie->check=true; //to know it is terminal condition    
}

bool search(string word, node* trie)
{
    int n=word.size();
    for (size_t i = 0; i < n; i++)
    {
        if(trie->child[word[i]-'A'] == NULL){
            return false;
        }
        trie=trie->child[word[i]='A'];
    }
    return trie->check;//if last character is true return true else false
}

int main()
{
    vector<string> v;
    v.push_back("ARE");
    v.push_back("AS");
    v.push_back("DO");
    v.push_back("DOT");
    v.push_back("NEW");
    v.push_back("NEWS");
    v.push_back("NO");
    v.push_back("NOT");

    node* root=new node();
    for (size_t i = 0; i < v.size(); i++)
    {
        add(v[i],root);
    }
    cout<<search("ARE", root)<<endl;
    cout<<search("AS", root)<<endl;
    cout<<search("NOT", root)<<endl;
    cout<<search("NEW", root)<<endl;

    return 0;
}