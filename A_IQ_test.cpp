#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i{1}; i <= n; i++)
    {
        cin >> arr[i];
    }
    int lastEven{0}, evenCount{0};
    int LastOdd{0}, oddCount{0};

    for (int i{1}; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
            lastEven = i;
        }
        else
        {
            oddCount++;
            LastOdd = i;
        }
    }
    if (oddCount == 1)
        cout << LastOdd;
    else if (evenCount == 1)
        cout << lastEven;
    return 0;
}