#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n][n];

    for (int i{0}; i < n; i++)
    {
        for (int j{0}; j < n; j++)
        {
            arr[i][j] = 0;
            if (i == j)
            {
                arr[i][j] = k;
            }
        }
    }
    for (int i{0}; i < n; i++)
    {
        for (int j{0}; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}