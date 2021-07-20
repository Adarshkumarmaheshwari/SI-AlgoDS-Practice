#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll n, x, it = 0;
    cin >> n >> x;
    int arr[51];
    ll k, y;
    int temp;

    for (int i{1}; i <= n; i++)
    {
        cin >> k;
        temp = 0;
        for (int j{0}; j < k; j++)
        {
            cin >> y;
            if (y < x && temp == 0)
            {
                arr[it] = i;
                it++;
                temp = 1;
            }
        }
    }
    cout << it << endl;
    for (int i{0}; i < it; i++)
        cout << arr[i] << " ";
    return 0;
}