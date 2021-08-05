#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=a+b;
        if(sum<3)cout<<"1"<<endl;
        else if(sum<=10 && sum >=3)cout<<"2"<<endl;
        else if(sum<=60 && sum >=11)cout<<"3"<<endl;
        else if(sum>60)cout<<"4"<<endl;
    }
    return 0;
}
