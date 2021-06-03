#include <iostream>
using namespace std;
bool checkArr(int arr[], int n, int k)
{
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    return checkArr(arr+1,n-1, k);
    
  
}

int main(){
    int arr[]={1,2,3,4,5};
    if(checkArr(arr,5, 3)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}