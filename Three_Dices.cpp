#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a, b, c;
        cin >> a >> b;
        long double sum = a + b;
        if (sum >= 6)
            cout << "0" << endl;
        else{
            sum=(6-sum)/6;
            double num = floor(sum*1000000.0)/1000000.0;
            cout <<num<< endl;
        }
    }
    return 0;
}