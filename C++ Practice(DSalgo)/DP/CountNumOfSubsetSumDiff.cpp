#include "bits/stdc++.h"
using namespace std;

int isSubsetSum(int set[], int n, int sum)
{
    int subset[n + 1][sum + 1];

    for (int i{0}; i < n; i++)
    {
        subset[i][0] = 1;
    }
    for (int i{1}; i <= sum; i++)
    {
        subset[0][i] = 0;
    }
    for (int i{1}; i <= n; i++)
    {
        for (int j{1}; j <= sum; j++)
        {
            if (set[i - 1] <= j)
            {
                subset[i][j] = subset[i - 1][j] + subset[i - 1][j - set[i - 1]];
            }
            else
            {
                subset[i][j] = subset[i - 1][j];
            }
        }
    }

    return subset[n][sum];
}

int main()
{
    int set[] = {1, 1, 2, 3};
    int diff = 1;
    int n = sizeof(set) / sizeof(set[0]);
    int sum{0};
    for (int i{0}; i < n; i++)
    {
        sum += set[i];
    }
    
    //Logic of this is:
    //s1 - s2 = diff
    //s1 + s2 = sumofAll(set[i]); below formula is derived from it.

    sum=(diff+sum)/2;
    cout << (isSubsetSum(set, n, sum));

    return 0;
}