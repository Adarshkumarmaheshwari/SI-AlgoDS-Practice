#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    int s, b, x, y;
    cin >> s >> b;
    for (int i{0}; i < b; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for (int i{0}; i < b; i++)
    {
        if (s <= v[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            s += v[i].second;
        }
    }
    cout << "YES" << endl;
}