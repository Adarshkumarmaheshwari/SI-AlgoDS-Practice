#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> marks(n);
    for (int i{0}; i < n; i++)
    {
        cin >> marks[i];
    }
    vector<int> ans(n, 0);

    for (int sub{0}; sub < m; sub++)
    {
        char best = '0';
        for (int j{0}; j < n; j++)
        {
            if (marks[j][sub] > best)
                best = marks[j][sub];
        }
        for (int k{0}; k < n; k++)
        {
            if (marks[k][sub] == best)
                ans[k] = 1;
        }
    }
    cout << count(ans.begin(), ans.end(), 1);
    return 0;
}