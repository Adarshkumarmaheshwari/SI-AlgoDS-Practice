#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int count{0};
    for (int i{0}; i < n; i++)
        cin >> a[i] >> b[i];

    for (int i{0}; i < n; i++)
    {
        for (int j{0}; j < n; j++)
        {
            if (a[i] == b[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}