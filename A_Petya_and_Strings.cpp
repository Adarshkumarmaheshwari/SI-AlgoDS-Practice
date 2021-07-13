#include "bits/stdc++.h"
using namespace std;

int solve(string s1, string s2)
{
   for_each(s1.begin(), s1.end(),[](auto&i){i=tolower(i);});
    for_each(s2.begin(), s2.end(),[](auto&i){i=tolower(i);});
    if(s1<s2) return -1;
    else if(s1>s2) return 1;
    else return 0;
}

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << solve(s1, s2);
    return 0;
}