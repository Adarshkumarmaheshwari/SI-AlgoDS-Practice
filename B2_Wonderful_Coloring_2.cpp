#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> m1;

        int arr[n];
        for (int i{0}; i < n; i++)
        {
            cin >> arr[i];
            m1[arr[i]]++;
        }
        unordered_map<int, int> m2;

        int temp = 0;
        int ans = 0;
        vector<int> v;
        for (int i{0}; i < n; i++)
        {
            if (m1[arr[i]] >= k)
            {
                ans++;
                m2[arr[i]] = 1;
            }
            else if (m1[arr[i]] < k)
            {
                temp += m1[arr[i]];
                v.push_back(arr[i]);
            }
            ans += (temp / k);
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}