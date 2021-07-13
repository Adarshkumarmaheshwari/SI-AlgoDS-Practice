#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxVal = INT_MIN;
    int max1 = a * b * c;
    int max2 = (a + b) * c;
    int max3 = a * (b + c);
    int max4 = a + b * c;
    int max5 = a + b + c;
    if (max1 >= max2 && max1 >= max3 && max1 >= max4 && max1 >= max5)
    {
        maxVal = max1;
    }
    else if (max2 >= max1 && max2 >= max3 && max2 >= max4 && max2 >= max5)
    {
        maxVal = max2;
    }
    else if (max3 >= max1 && max3 >= max4 && max3 >= max2 && max3 >= max5)
    {
        maxVal = max3;
    }
    else if (max4 >= max1 && max4 >= max2 && max4 >= max3 && max4 >= max5)
    {
        maxVal = max4;
    }else{
        maxVal=max5;
    }
    cout << maxVal << endl;
    return 0;
}