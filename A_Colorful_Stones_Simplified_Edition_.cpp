#include "bits/stdc++.h"
using namespace std;

int main()
{
    string stones, command;
    cin >> stones >> command;
    int j{0};
    for (int i{0}; i < command.length(); i++)
    {
        if (command[i] == stones[j])
        {
            j++;
        }
    }
    cout << j + 1 << endl;
    return 0;
}