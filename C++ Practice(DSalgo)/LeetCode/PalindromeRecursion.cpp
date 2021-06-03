#include <iostream>
using namespace std;
bool checkPal(int arr[], int s, int e)
{
    if(s>e){
        return true;
    }
    if(arr[s]==arr[e]){
        return checkPal(arr,s+1,e-1);
    }else{
        return false;
    }
    
}

int main(){
    int arr[]={1,2,3,3,2,1};
    cout<<checkPal(arr,0,5)<<" ";
    return 0;
}