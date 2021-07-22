#include "bits/stdc++.h"
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    char arr[x][y];
    for (int i{0}; i < x; i++)
    {
        for (int j{0}; j < y; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }
            }
           
        }
    }
    for (int i{0}; i < x; i++)
    {
        for (int j{0}; j < y; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}