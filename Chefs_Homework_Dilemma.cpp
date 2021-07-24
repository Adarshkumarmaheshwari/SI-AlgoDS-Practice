#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i{0}; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_sum = INT_MAX;

        for (int i = 0; i < n - k + 1; i++)
        {
            int current_sum = 0;
            for (int j = 0; j < k; j++)
                current_sum = current_sum + arr[i + j];

            max_sum = min(current_sum, max_sum);
        }
        cout << max_sum << endl;
    }
    return 0;
}