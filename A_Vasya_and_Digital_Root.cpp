#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    if(d==0 && n!=1)
    {
        cout<<"No solution"<<endl;
        return 0;
    }

    cout<<d;
    for(int i{1}; i<n; i++){
        cout<<"0";
    }

    return 0;
}