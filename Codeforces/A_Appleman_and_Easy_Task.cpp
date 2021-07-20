#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char board[n][n];
    bool even = true;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i - 1 >= 0 && board[i - 1][j] == 'o')
                count++;
            if (i + 1 < n && board[i + 1][j] == 'o')
                count++;
            if(j - 1 >= 0 && board[i][j - 1] == 'o')
                count++;
            if(j + 1 < n && board[i][j + 1] == 'o')
                count++;
            if (count % 2 == 1){
                even = false;
            }
        }
    }

    if (even)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}