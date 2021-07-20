#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    int k, l;
    cin >> k >> l;
    int count{0};
    if (l % k != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (l != k)
    {
        l = l / k;
        count++;
        if (l < k)
        {
            break;
        }
    }
    if (l == k)
    {
        cout << "YES" << endl;
        cout << count << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}