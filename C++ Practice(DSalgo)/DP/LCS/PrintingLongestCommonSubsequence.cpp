

#include <bits/stdc++.h>
using namespace std;

string LCS(string s1, string s2, int n, int m)
{
    int set[n + 1][m + 1];

    for (int i{0}; i < n; i++)
    {
        for (int j{0}; j < m; j++)
        {
            set[i][0] = 0;
            set[0][i] = 0;
        }
    }
    for (int i{1}; i <= n; i++)
    {
        for (int j{1}; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                set[i][j] = 1 + set[i - 1][j - 1];
            }
            else
            {
                set[i][j] = max(set[i - 1][j], set[i][j - 1]);
            }
        }
    }
    string ans = "";
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
        else
        {
            if (set[i - 1][j] > set[i][j - 1])
                i--;
            else
                j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s = "rajubhaimasthai";
    string s2 = "asdmasthai";
    cout << LCS(s, s2, s.length(), s2.length()) << endl;
    return 0;
}