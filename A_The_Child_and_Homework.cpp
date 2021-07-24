#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;

    int nA = a.length();
    int nB = b.length();
    int nC = c.length();
    int nD = d.length();
    int ans{0};
    if (nA  <= nB/2 && nA <= nC / 2 && nA <= nD / 2 || nA / 2 >= nB && nA / 2 >= nC && nA / 2 >= nD)
    {
        cout << "A" << endl;
        return 0;
    }
    else if (nB<= nA / 2 && nB <= nC/ 2 && nB  <= nD/ 2 || nB / 2 >= nA && nB / 2 >= nC && nB / 2 >= nD)
    {
        cout << "B" << endl;
        return 0;
    }
    else if (nC  <= nA/ 2 && nC  <= nB/ 2 && nC <= nD / 2 || nC / 2 >= nB && nC / 2 >= nA && nC / 2 >= nD)
    {
        cout << "C" << endl;
        return 0;
    }
    else if (nD <= nA / 2 && nD <= nB / 2 && nD <= nC / 2 || nD / 2 >= nB && nD / 2 >= nC && nD / 2 >= nA)
    {
        cout << "D" << endl;
        return 0;
    }
    else
    {
        cout << "C" << endl;
    }

    return 0;
}