#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        long int ans=0;
        long int pow =1;
        int n=s.size();
        
        for(long i=n-1; i>=0; i--){
            ans = ans + (s[i]-64)*pow;
            pow=pow*26;
        }
        return ans;
    }
};