#include "bits/stdc++.h"
using namespace std;

void solve(int arr[], int n)
{
    for (int i{0}; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        else
            cout << abs(arr[i])<<endl;
    }
    for (int i{0}; i < n; i++)
    {
        if(arr[i]>0) cout<<"missing num : "<<i+1<<endl;
    }
}

int main()
{
    int arr[] = {7, 3, 4, 5, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr, n);
}