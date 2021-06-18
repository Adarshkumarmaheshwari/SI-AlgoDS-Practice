#include "bits/stdc++.h"
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,2,1,2,1,2,3};
    map<int, int> m;
    int count=0;
    for(int i=0; i<11; i++)
    {
        //m.insert(arr[i],count++);
        m[arr[i]]++;
    }
    
    map<int,int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++)
    cout<<it->first<<" "<<it->second<<endl;
}