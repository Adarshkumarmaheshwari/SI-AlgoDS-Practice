#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    if(n==0){
        return 0;
    }
    int smallArr = sum(arr+1,n-1);
    return arr[0]+smallArr;
  
}

int main(){
    int arr[]={1,2,3,4,5};
    cout<<sum(arr,5)<<endl;;
    return 0;
}