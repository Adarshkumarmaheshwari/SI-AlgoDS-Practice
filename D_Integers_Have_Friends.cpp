#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        int x = 2;
        for (int i{0}; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans[n];
        for (int i{1}; i < n; i++)
        {
            ans[i] = abs(arr[i] - arr[i - 1]);
        }
        int count = 0;

        map<int, int> m;
        for (int i{0}; i < n; i++)
        {
            m[ans[i]]++;
        }
        int finalAns=-1;
        int maxCount=0;
        for(auto i:m)
        {
            if(maxCount<i.second)
            {
                finalAns=i.first;
                maxCount=i.second;
            }
        }
        
        cout << maxCount << endl;
    }

    return 0;
}