#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int mySum{0};
    int broSum{0};

    for (int i{0}; i < n; i++){
        cin >> arr[i];
        broSum+=arr[i];
    }

    
    int counter{0};
    broSum=broSum/2;
    sort(arr, arr+n);
    for(int i{n-1}; i>=0; i--)
    {
        mySum+=arr[i];
        counter++;

        if(mySum>broSum){
            break;
        }
    }

    cout<<counter<<endl;

    return 0;
}