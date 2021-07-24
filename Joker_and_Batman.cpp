#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l;
        cin >> n >> m >> l;
        int count[n+1];

        for(int i{1}; i<=m; i++)
        {
            int x; cin>>x;
            for(int j{1}; j<=x; j++)
            {
                int k; cin>>k;
                count[k]=i;
            }
        }
        
        int cou=0;
        int prevStrip=0;
        for(int i{1}; i<=l; i++)
        {
            int k;cin>>k;

            if(count[k]!=prevStrip)cou++;
            prevStrip=count[k];
        }    
        cout<<cou<<endl;    
    }
    return 0;
}