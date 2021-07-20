#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    bool temp = false;
    int l{0}, k{0};
    while (cin >> x >> y)
    {

        if (n == 1 && x % 2 + y % 2 == 1)
        {
            cout << "-1" << endl;
            return 0;
        }
        if (x % 2 + y % 2 == 1)
            temp = true;
        l += x;
        k += y;
    }
    if (l % 2 == 0 && k % 2 == 0)
        cout << "0" << endl;
    else if (l % 2 == 1 && k % 2 == 1 && temp)
        cout << "1" << endl;
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}