#include <iostream>
using namespace std;
int checkArr(int arr[], int n, int k, int count)
{
    if(count==n){
        return 0;
    }
    if(arr[count]==k){
    return 1+ checkArr(arr,n, k,count+1);
    }else{
    return checkArr(arr,n, k,count+1);

    }
}

int main(){
    int arr[]={1,2,3,4,3,5,3};
    int ans=0;
    cout<<checkArr(arr,7, 3,0)<<" ";
    return 0;
}