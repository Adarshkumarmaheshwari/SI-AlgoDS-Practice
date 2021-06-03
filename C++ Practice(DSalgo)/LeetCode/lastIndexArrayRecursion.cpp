#include <iostream>
using namespace std;
int checkArr(int arr[], int n, int k, int count)
{
    if(count==-1){
        return -1;
    }
    if(arr[count]==k){
        return count;
    }
    
    return checkArr(arr,n, k,count-1);
     
  
}

int main(){
    int arr[]={1,2,3,4,5,3};
    cout<<checkArr(arr,6, 3,5)<<endl;
    return 0;
}