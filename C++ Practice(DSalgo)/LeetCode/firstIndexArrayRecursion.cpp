#include <iostream>
using namespace std;
int checkArr(int arr[], int n, int k, int count)
{
    if(count==n){
        return -1;
    }
    if(arr[count]==k){
        return count;
    }
    
    return checkArr(arr,n, k,count+1);
     
  
}

int main(){
    int arr[]={1,2,3,4,5};
    cout<<checkArr(arr,5, 3,0)<<endl;
    return 0;
}