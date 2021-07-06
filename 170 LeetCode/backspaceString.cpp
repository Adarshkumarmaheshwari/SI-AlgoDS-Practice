#include "bits/stdc++.h"
using namespace std;


class Solution {
public:
    string backspace(string s){
        string ans="";
        for(int i{0}; i<s.size(); i++){
            if(s[i]>='a'&&s[i]<='z')
            ans+=s[i];
            else if(!ans.empty()){
                ans.pop_back();
            }
        }
        return ans;
    }
    
    bool backspaceCompare(string s, string t) {
       string s1=backspace(s);
        string s2=backspace(t);
        
        if(s1.compare(s2)==0)
            return true;
        return false;
                
        
    }
};