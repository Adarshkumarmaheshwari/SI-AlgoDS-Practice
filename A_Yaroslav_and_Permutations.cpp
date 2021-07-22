#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int k = (n + 1) / 2;
    unordered_map<int, int> m;
    for (int i{0}; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    bool flag = true;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > k)
        {
            flag = false;
            break;
        }
    }
    if (!flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}