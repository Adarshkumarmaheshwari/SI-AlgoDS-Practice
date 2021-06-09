#include<iostream>
using namespace std;

//Logic=> pehle chota element than bada than chota
void waveSolve(int arr[], int n)
{
    for(int i{1}; i<n; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i], arr[i-1]);
        }
        if(arr[i]>arr[i+1]&&i<=n-2){
            swap(arr[i],arr[i+1]);
        }
    }
    
}
int main ()
{
    int arr[]={1,3,4,7,5,6,2};
    int n=7;
    waveSolve(arr,n);
     for(int i{0}; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}