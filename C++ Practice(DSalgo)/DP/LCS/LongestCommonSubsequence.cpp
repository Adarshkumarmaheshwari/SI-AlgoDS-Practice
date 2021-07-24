

#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int n, int m)
{
    int set[n + 1][m + 1];

  for (int i{0}; i < n+1; i++)
    {
        for (int j{0}; j < m+1; j++)
        {
            if (i == 0 || j == 0)
            {
                set[i][j] = 0;
            }
        }
    }
    for (int i{1}; i <=n; i++)
    {
        for (int j{1}; j <=m; j++)
        {
            if (s1[i] == s2[j])
            {
                set[i][j] = 1 + set[i-1][j - 1];

            }
            else
            {
                set[i][j] = max(set[i - 1][j], set[i][j - 1]);
            }
        }
    }
    return set[n][m];
}

int main()
{
    string s = "rajuuujikalkalkalbb";
    string s2 = "rajuukalkalkalzzz";
    cout << LCS(s, s2, s.length(), s2.length()) << endl;
    return 0;
}