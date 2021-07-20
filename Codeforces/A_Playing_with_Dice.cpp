#include "bits/stdc++.h"
using namespace std;

int main()
{
    int p1, p2;
    int a{0}, b{0}, draw{0};
    cin >> p1 >> p2;
    for (int i{1}; i <= 6; i++)
    {
        if (abs(p1 - i) < abs(p2 - i))
            a++;
        else if (abs(p2 - i) < abs(p1 - i))
            b++;
        else
            draw++;
    }
    cout << a << " " << draw << " " << b << endl;

    return 0;
}