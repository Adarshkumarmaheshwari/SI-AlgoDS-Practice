#include "bits/stdc++.h"
using namespace std;

int main()
{
    set<char> s;
    string str;
    getline(cin, str);

    for (int i{0}; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            s.insert(str[i]);
        }
    }
    cout << s.size() << endl;
    return 0;
}