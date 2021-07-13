#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll x, y;
    cin >> x >> y;
    for (int i{1}; i <= x; i++)
    {
        if (i % 4 == 2)
        {
            for (int j{0}; j < y - 1; j++)
            {
                cout << ".";
            }
            cout << "#" << endl;
        }
        else if (i % 4 == 0)
        {
            cout << "#";
            for (int j{1}; j < y; j++)
            {
                cout << ".";
            }
            cout<<endl;

        }
        else
        {
            for (int j{0}; j < y; j++)
            {
                cout << "#";
            }
            cout<<endl;
        }
    }
    return 0;
}