#include "bits/stdc++.h"
using namespace std;

int removeZero(int k)
{
    int r,num(0),pow(1);
    while(k>0)
    {
        r = k % 10;
        k= k / 10;
        if(r!=0)
        {
            num+=r*pow;
            pow*=10;
        }
    }
    return num;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a + b;

    int A = removeZero(a);
    int B = removeZero(b);
    int C = removeZero(c);

    if (A + B == C)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}