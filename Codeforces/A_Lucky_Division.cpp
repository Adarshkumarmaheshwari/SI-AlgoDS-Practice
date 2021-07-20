#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count{0};
    int k = atoi(s.c_str());
    for (int i{0}; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            count++;
    }
    if (count == s.length())
        cout << "YES" << endl;
    else if (k % 4 == 0 || k % 7 == 0 || k % 47 == 0)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}