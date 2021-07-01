#include "bits/stdc++.h"
using namespace std;

int maxProfit(int prices[], int n)
{
    int maxProfit = 0;
    int minProfit = prices[0];
    for (int i{1}; i < n; i++)
    {
        if (prices[i] > prices[i - 1])
        {
            maxProfit = max(maxProfit, prices[i] - minProfit);
        }
        else
        {
            minProfit = min(minProfit, prices[i]);
        }
    }
    return maxProfit;
}

int main()
{
 int prices[] = {7,1,5,3,6,4};
int n = sizeof(prices)/sizeof(prices[0]);

 cout<<maxProfit(prices, n);
    return 0;
}