#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string>ans;
    for(int i{0}; i<s.length(); i++){
        string word="";
        while(s[i]!=' '&&i<s.length()){
            word+=s[i];
            i++;
        }
        ans.push(word);

    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }cout<<endl;
}

int main(){
    string s="Hey how are you doing?";
    reverseSentence(s);
    return 0;
}
