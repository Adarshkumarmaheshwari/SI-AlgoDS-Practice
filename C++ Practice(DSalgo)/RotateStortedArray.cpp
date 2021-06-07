#include<iostream>
using namespace std;
//input will be rotated sorted array and there are no duplicates values

int search(int arr[], int key, int n)
{
    int s=0;
    int e=n-1;
        while(s<=e){

    int mid =(e+s)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[s]<=arr[mid]){
            if(key>=arr[s] && key<=arr[mid]){
                e=mid-1;

            }else{
                s=mid+1;
            }
        }else{
            if(key>=arr[mid] && key<=arr[e]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
    }
        return -1;

}
int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n=7;
    int target = 4;
    cout <<search(arr,target,n)<<endl;
    return 0;
}