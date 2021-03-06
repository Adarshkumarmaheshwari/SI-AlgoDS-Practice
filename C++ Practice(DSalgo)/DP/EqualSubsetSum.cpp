#include "bits/stdc++.h"
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{
    if (sum % 2 != 0)
    {
        return false;
    }
    else if(sum%2==0)
    {
        sum = sum / 2;
        bool subset[n + 1][sum + 1];

        for (int i{0}; i < n; i++)
        {
            subset[i][0] = true;
        }
        for (int i{1}; i <= sum; i++)
        {
            subset[0][i] = false;
        }

        for (int i{1}; i <= n; i++)
        {
            for (int j{1}; j <= sum; j++)
            {
                if (set[i - 1] <= j)
                {
                    subset[i][j] = subset[i - 1][j - set[i - 1]] || subset[i - 1][j];
                }
                else
                {
                    subset[i][j] = subset[i - 1][j];
                }
            }
        }

        return subset[n][sum];
    }
}

int main()
{
    int set[] = {1, 5, 11, 5};
    int n = sizeof(set) / sizeof(set[0]);

    int sum = 0;
    for (int i{0}; i < n; i++)
    {
        sum += set[i];
    }

    if (isSubsetSum(set, n, sum) == true)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}