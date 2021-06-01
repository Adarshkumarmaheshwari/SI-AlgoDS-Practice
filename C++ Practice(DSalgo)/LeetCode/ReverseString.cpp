#include<bits/stdc++.h>
using namespace std;
class ReverseString {
public:
    void reverseString(vector<char>& s) {
         stack<char> st;
    for(int i=0; i<s.size(); i++){
        //push
        st.push(s[i]);
    }

    //pop
    for(int i=0; i<s.size(); i++){
    s[i]=st.top();
    st.pop();
    }
    }
};