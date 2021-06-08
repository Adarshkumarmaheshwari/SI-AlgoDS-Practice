#include<iostream>
#include<vector>
using namespace std;
//if D => next number should be smaller
//if I => next number should be larger

/*
LOGIC
*****
if we put largest element at current place so, next element will automatically
be smaller. Similarly when we have given I which means next element must be greater
so, we can put smallest element at current position so next element will automatically be smaller.
*/
int main()
{
    string str="DIDD";
    int n=str.size();
    int s=1, e=n;
    vector<int> ans(n);
    for(int i{0}; i<n; i++){
        if(str[i]=='D'){
            ans[i]=e;
            e--;
        }else{
            ans[i]=s;
            s++;
        }
    }
    ans[n-1]=s;
    for(auto x:ans){
        cout<<x<<" ";
    }
}