#include <iostream>
using namespace std;
void checkArr(int arr[], int n, int k, int count, int &ans)
{
    if(count==n){
        return;
    }
    if(arr[count]==k){
        ans++;
    }
    checkArr(arr,n, k,count+1,ans);
}

int main(){
    int arr[]={1,2,3,4,3,5,3};
    int ans=0;
    checkArr(arr,7, 3,0,ans);
    cout<<ans<<endl;
    return 0;
}