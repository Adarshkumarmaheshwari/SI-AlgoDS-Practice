#include "bits/stdc++.h"
using namespace std;

vector<string> solve(vector<string>& ans, string s)
{
    
    int n=s.size();
    if(n<=10){
        ans.push_back(s);
    }
    else
    {
        ans.push_back(string{s[0]});
        int temp = n-2;
        ans.push_back(to_string(temp));
        ans.push_back(string{s[n-1]});
    }
return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    vector<string> ans;
    string s;
    cin>>s;
    solve(ans, s);
    for(auto x:ans){
        cout<<x;
    }
    cout<<endl;
    }
    return 0;
}