#include <iostream>
using namespace std;
void checkArr(int arr[], int n, int k, int count)
{
    if(count==n){
        return;
    }
    if(arr[count]==k){
        cout<< count<<" ";
    }
    return checkArr(arr,n, k,count+1);
}

int main(){
    int arr[]={1,2,3,4,5,3};
    checkArr(arr,6, 3,0);
    return 0;
}