#include "bits/stdc++.h"
using namespace std;

int main()
{
    int x;
    cin >> x;
    int count{0};

    while (true)
    {
        count++;
        x++;
        stringstream ss;
        string s;
        ss << x;
        ss >> s;
        if (s.find('8')!=string::npos)
        {
            cout << count << endl;
            return 0;
        }
    }
    return 0;
}