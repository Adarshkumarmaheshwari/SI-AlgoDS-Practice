#include<bits/stdc++.h>
using namespace std;

void FirstNeg(int arr[], int k, int n)
{
    int j{0};
    int i{0};
    list <int> v;
    vector<int> ans;
    if(n<k){
        return;
    }
    while(j<n)
    {
        
         if(arr[j]<0){
             v.push_back(arr[j]);
         }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(v.size()==0)
            ans.push_back(0);
            else{
                ans.push_back(v.front());
                if(arr[i]==v.front()){
                    v.pop_front();
                }
            }
        
            j++;
            i++;
        }
       
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}

int main()
{
    int arr[]={-8, 2, 3, -6, 10};
    int n=5;
    int k=2;
    FirstNeg(arr,k,n);
    return 0;
}