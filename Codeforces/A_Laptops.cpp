#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    bool flag = false;
    while (n--)
    {
        cin >> x >> y;
        if (x < y)
            flag = true;
    }
    if (flag)
        cout << "Happy Alex" << endl;
    else
    {
        cout << "Poor Alex" << endl;
    }
    return 0;
}