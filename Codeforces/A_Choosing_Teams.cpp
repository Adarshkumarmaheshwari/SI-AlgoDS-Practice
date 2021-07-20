#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, x, k;
    cin >> n >> x;
    int count{0};
    for (int i{0}; i < n; i++)
    {
        cin >> k;
        if (k + x <= 5)
            count++;
    }
    cout << count / 3 << endl;

    return 0;
}