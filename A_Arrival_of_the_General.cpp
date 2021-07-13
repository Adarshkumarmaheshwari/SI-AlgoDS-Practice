#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    int maxVal{0};
    int minval{1000};
    int minIndex{0};
    int maxIndex{0};
    cin >> n;
    for (int i{0}; i < n; i++)
    {
        int k;
        cin >> k;
        if (minval >= k)
        {
            minval = k;
            minIndex = i;
        }
        if (maxVal < k)
        {
            maxVal = k;
            maxIndex = i;
        }
    }
    if (maxIndex > minIndex)
    {
        cout << (maxIndex - 2) + (n - minIndex);
    }
    else
    {
        cout << (maxIndex - 1) + (n - minIndex);
    }

    return 0;
}