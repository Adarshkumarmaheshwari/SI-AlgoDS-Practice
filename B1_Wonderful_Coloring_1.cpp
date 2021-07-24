#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        unordered_map<char, int> m;
        
        for (int i{0}; i < str.length(); i++)
        {
            m[str[i]]++;
        }

        int ans{0};
        int temp{0};
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if(it->second>=2)ans++;
            else if(it->second==1)temp++;
        }
        cout<<ans+(temp/2)<<endl;
    }
    return 0;
}