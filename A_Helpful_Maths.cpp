#include "bits/stdc++.h"
using namespace std;

void solve(string s)
{ 
    vector<int>ans;
   

    for(int i{0}; i<s.length(); i++){
        if(s[i]=='+') continue;
        else{
            if(s[i]=='1')ans.push_back(1);
            else if(s[i]=='2')ans.push_back(2);
            else if(s[i]=='3')ans.push_back(3);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i{0}; i<ans.size(); i++){
        if(i!=ans.size()-1)
        cout<<ans[i]<<"+";
        else{
            cout<<ans[i];
        }
    }
}

int main()
{
    string str;
    cin>>str;
    solve(str);
    return 0;
}