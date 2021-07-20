#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    int a, b, c;
    int sumA{0}, sumB{0}, sumC{0};
    cin >> n;
    for (int i{0}; i < n; i++)
    {
        cin >> a >> b >> c;
        sumA += a+b+c;
        sumB += b;
        sumC += c;
    }
    if (sumA + sumB + sumC == 0)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}