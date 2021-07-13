#include "bits/stdc++.h"
using namespace std;

#define lli long long int
int main()
{
    lli n;
    cin >> n;

    if (n < 0)
    {
        int temp = n % 10;
        int lastValDelete = n / 10;
        int secondLastValDelete = (lastValDelete / 10) * 10 + temp;
        if (lastValDelete > secondLastValDelete)
        {
            cout << lastValDelete << endl;
        }
        else
        {
            cout << secondLastValDelete << endl;
        }
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}