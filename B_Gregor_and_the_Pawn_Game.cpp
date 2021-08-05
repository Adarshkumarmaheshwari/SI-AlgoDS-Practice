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
        ll a;
        cin >> a;
        string me, enemy;
        cin >> enemy >> me;

        ll res = 0;

        for (int i{0}; i < a; i++)
        {
            if (me[i] == '1')
            {
                if (enemy[i] == '0')
                {
                    res++;
                }

                else if (i > 0 && enemy[i - 1] == '1')
                {
                    res++;
                    enemy[i - 1] = '0';
                }
                else if (i < a && enemy[i + 1] == '1')
                {
                    res++;
                    enemy[i + 1] = '0';
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}