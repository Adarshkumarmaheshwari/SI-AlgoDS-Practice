#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool temp = true;
    for (int i{0}; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (temp==false){
                cout << " ";
            }
            continue;
        }
        else
        {
            temp = false;
            cout << s[i];
        }
    }

    return 0;
}