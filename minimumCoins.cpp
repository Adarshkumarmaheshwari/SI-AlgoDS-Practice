#include "bits/stdc++.h"
using namespace std;

void solve(int arr[], int n, int v)
{
    vector<int> ans;
    int flag = 1;
    int count = 0;
    int minCoins = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v == 0)
            break;
        {
            while (v >= arr[i])
            {
                v = v - arr[i];
                count++;
                ans.push_back(arr[i]);
            }
        }
    }
    for(int i{0}; i<ans.size(); i++)
    {
        cout<<ans[i]<< " ";
    }
    cout<<endl;
    cout<<"Total number of coins used : "<<count<<endl;
}

int main()
{
    int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int v = 49;
    solve(arr, n, v);

    return 0;
}