#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll sum = sqrt(a * b / c) + sqrt(b * c / a) + sqrt(c * a / b);

    cout << 4 * sum << endl;

    return 0;
}