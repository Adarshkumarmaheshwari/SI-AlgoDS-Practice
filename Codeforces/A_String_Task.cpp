#include "bits/stdc++.h"
using namespace std;

vector<string> solve(string s, vector<string> &ans)
{
    
    for(int i{0}; i<s.length(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'|| s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'|| s[i]=='U' || s[i]=='Y'|| s[i]=='y'){
            continue;
        }else{
            char st = tolower(char{s[i]});
            ans.push_back(".");
            ans.push_back(string{st});
        }
    }
    return ans;
}
int main()
{
string s;
vector<string>ans;
cin>>s;
solve(s,ans);
for(auto x: ans)
{
    cout<<x;
}
    return 0;
}