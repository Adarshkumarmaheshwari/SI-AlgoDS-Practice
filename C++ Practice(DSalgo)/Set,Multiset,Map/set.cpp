#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    for(auto x: s){
        cout<<x<<" ";
    }
    s.erase(2);
    cout<<endl;
    for(auto x: s){
        cout<<x<<" ";
    }
    return 0;
}