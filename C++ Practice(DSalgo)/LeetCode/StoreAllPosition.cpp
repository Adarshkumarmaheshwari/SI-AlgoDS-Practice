#include <iostream>
#include <vector>
using namespace std;
void checkArr(int arr[], int n, int k, int count,vector<int> &ans)
{
    if(count==n){
        return;
    }
    if(arr[count]==k){
        ans.push_back(count);
    }
    checkArr(arr,n,k,count+1,ans);
}

int main(){
    int arr[]={1,2,3,4,3,5,3};
vector<int> ans;
    checkArr(arr,7, 3,0,ans);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}