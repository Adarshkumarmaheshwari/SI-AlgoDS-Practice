#include "bits/stdc++.h"
using namespace std;
//implemented using BST

int32_t main()
{
 multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    for(auto x: s){
        cout<<x<<" ";
    }
    //s.erase(2);   //it will erase all the 2 values
    s.erase(s.find(2));
    cout<<endl;
    for(auto x: s){
        cout<<x<<" ";
    }
    return 0;
}