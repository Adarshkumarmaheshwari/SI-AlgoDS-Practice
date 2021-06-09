#include <iostream>
using namespace std;


void countSort(int arr[], int n)
{
    int k=arr[0];
    for(int i{0}; i<n; i++){ //getting the max value from the array
        k=max(k,arr[i]);
    }
    int count[10]={0};
    for(int i{0}; i<n; i++){//couting the occurance of values in array and storing it in count array
        count[arr[i]]++;
    }
    for(int i{1}; i<=k; i++){ //add previous value to current value because current element index depend on occurance of previous number
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i{n-1}; i>=0; i--){
        output[--count[arr[i]]]=arr[i]; //It will go to count array at the index and decrement it and store value to output
    }
    for(int i{0}; i<n; i++){
        arr[i]=output[i];
    }


}

int main()
{
 int arr[]={1,3,2,3,4,1,6,4,3};
 countSort(arr,9);
    for(int i{0}; i<9; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}