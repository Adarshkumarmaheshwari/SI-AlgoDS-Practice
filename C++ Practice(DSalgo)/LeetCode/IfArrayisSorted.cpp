#include <iostream>
using namespace std;
bool checkArr(int arr[], int n)
{
    if(n==0 ||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool isSmallerSorted=checkArr(arr+1,n-1);
    return isSmallerSorted;
}

int main(){
    int arr[]={1,2,9,4,5};
    if(checkArr(arr,5)){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}