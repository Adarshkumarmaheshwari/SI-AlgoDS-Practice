#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> m;
    string s;
    for (int i{0}; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }
    int temp{0};
    string ans = "";
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > temp)
        {
            temp = it->second;
            ans = it->first;
        }
    }
    cout << ans << endl;

    return 0;
}