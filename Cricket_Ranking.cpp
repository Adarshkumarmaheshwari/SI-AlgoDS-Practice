#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r1, w1, c1;
        cin >> r1 >> w1 >> c1;
        int r2, w2, c2;
        cin >> r2 >> w2 >> c2;

        // int p1 = 0;
        //  p1 = r1 + w1 + c1;
        // int p2 = 0;
        // p2 = r2 + w2 + c2;
        int count1 = 0;
        int count2 = 0;
        if (r1 > r2)
            count1++;
        else
            count2++;
        if (w1 > w2)
            count1++;
        else
            count2++;
        if (c1 > c2)
            count1++;
        else
            count2++;

        if (count1 > count2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}