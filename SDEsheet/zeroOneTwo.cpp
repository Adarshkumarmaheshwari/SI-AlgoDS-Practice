#include "bits/stdc++.h"
using namespace std;

void solve(int arr[], int n)
{
    int lo = 0;
    int mid = 0;
    int hi = n;
    while (mid <= hi)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid], arr[lo]);
            mid++;
            lo++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[hi]);
            hi--;
            break;
        }
    }
}

int main()
{
    int arr[9] = {1, 0, 0, 1, 2, 1, 2, 0, 1};
    solve(arr, 8);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}